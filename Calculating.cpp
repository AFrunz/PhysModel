#include <iostream>
#include <list>
//#include <SFML/Graphics.hpp>
#include <cmath>

const int WIDTH = 1000;
const int HEIGHT = 800;
const int LINE_HEIGHT = 3;
const int SCALE = 1000000;
const long double STEP = 0.00000000001;
const int ANIMATION_SPEED = 4;


class HeadPoint{
protected:
    double x, y;
    double speed[2];

public:
    HeadPoint(double x_, double y_, double velocityX, double velocityY):x(x_), y(y_){
        speed[0] = velocityX;
        speed[1] = velocityY;
    }
    bool move(double qe, double qb, double m, double deltaTime){
        double ax = (qe + qb * speed[1]) / m;
        double ay = 0 - qb * speed[0] / m;
        speed[0] += ax * deltaTime;
        speed[1] += ay * deltaTime;
        std::cout << speed[0] << " " << speed[1] << std::endl;
        y += speed[0] * deltaTime * SCALE;
        x -= speed[1] * deltaTime * SCALE;
        if (x > WIDTH || y > HEIGHT){
            return false;
        }
        return true;
    }

    const sf::Vector2f getCords(){
        return sf::Vector2f(x, y);
    }
};

class Trajectory{
protected:
    HeadPoint head;
    sf::Vector2f point;
    std::list<sf::CircleShape> circles;
public:
    Trajectory(double startX, double startY, double velocityX, double velocityY):
        head(startX, startY, velocityX, velocityY), point(), circles(){}
    HeadPoint& getHead(){
        return head;
    }
    HeadPoint getHead() const{
        return head;
    }
//    void setHead(){};
    void addPoint(double x_, double y_){
//        Point p(x_, y_);
        point = sf::Vector2f(x_, y_);
    }
    void draw(sf::RenderWindow& window){
        sf::CircleShape circle(LINE_HEIGHT);
        circle.setFillColor(sf::Color::Blue);
        circle.setPosition(head.getCords());
        window.draw(circle);
//        sf::CircleShape circle(LINE_HEIGHT + 1);
//        circle.setFillColor(sf::Color::Blue);
//        circle.setPosition(head.getCords());
//        window.draw(circle);
//        for (auto c : circles){
//            window.draw(c);
//        }
//        window.display();
    }
    bool step(double qe, double qb, double m, double deltaTime){
        sf::CircleShape circle(LINE_HEIGHT);
        circle.setFillColor(sf::Color::Black);
        circle.setPosition(head.getCords());
        circles.push_back(circle);
        return head.move(qe, qb, m, deltaTime);
    }

};


class Model{
    Trajectory tr;
    sf::RenderWindow* window;
    //sf::clock
    double velocity;
    double alpha;
    double e;
    double b;
    double charge;
    double mass;
public:
    Model(sf::RenderWindow& window_, double velocity_, double alpha_, double e_, double b_, double charge_ = 1,
          double mass_ = 0.000001):window(&window_), velocity(velocity_), alpha(alpha_), e(e_), b(b_),
          charge(charge_), mass(mass_),
          tr(10, HEIGHT / 2, velocity_ * std::cos(alpha_), velocity_ * std::sin(alpha_)){
    }

    bool draw(double time){
        bool res = tr.step(charge * e, charge * b, mass, time);
        tr.draw(*window);
        return res;
    }


};

const double TEST_VELOCITY = 1000;
const double TEST_ALPHA = 0.52;
const double TEST_E = 10000;
//const double TEST_E = 0;
const double TEST_B = 4;



int main() {
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "My model(alpha)");
    window.setFramerateLimit(0);
    window.clear(sf::Color::White);
    //Input data
    Model model(window, TEST_VELOCITY, TEST_ALPHA, TEST_E, TEST_B);
//    sf::Clock clock;
    int flag = 0;
    bool animationProcess = true;
    while (window.isOpen()){
//        float time = clock.getElapsedTime().asMicroseconds(); //дать прошедшее время в микросекундах
//        clock.restart(); //перезагружает время
//        time = time/80000; //скорость игры
//        std::cout << time << std::endl;
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        if (animationProcess){
            animationProcess = model.draw(STEP);
        }
//            window.clear(sf::Color::White);
//        window.display();
//        circle.move(100, 150);
//        window.draw(circle);
//        circle.move(100, 150);
//        window.draw(circle);
        if (flag == 0){
            window.display();
        }
        flag = (flag + 1) % ANIMATION_SPEED;
    }
    return 0;
}
