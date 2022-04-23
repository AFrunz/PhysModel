#ifndef MODEL_H
#define MODEL_H
#include <QGraphicsScene>
#include <cmath>
#include <ctime>

//const long double MASS = 1.6e-27;
const long double MASS = 1.6e-23;
const long double CHARGE = 1.6e-19;



struct GlobalSettings;

class HeadPoint{
protected:
    double x, y;
    double speed[2];

public:
    HeadPoint(double x_ = 0, double y_ = 0, double velocityX = 0, double velocityY = 0);
    HeadPoint(const HeadPoint&) = default;
    HeadPoint& operator= (const HeadPoint&) = default;
    ~HeadPoint() = default;

    bool move(long double qe, long double qb, long double m, GlobalSettings& settings);
    QRectF getCircle(int lineHeight) const;

};


struct GlobalSettings{
    int windowWidth;
    int windowHeight;
    int lineHeight;
    int scale;
    long double step;
    int animationSpeed;
};


class Model{
    QGraphicsScene* window;
    HeadPoint head;
    GlobalSettings settings;
    double velocity;
    double alpha;
    double e;
    double b;
    long double charge;
    long double mass;
public:
    Model(QGraphicsScene* window_, double velocity_, double alpha_, double e_, double b_, const GlobalSettings& settings_,
          long double charge_, long double mass_);
    Model(const Model& a) = default;
    Model& operator= (const Model& a) = default;
    ~Model() = default;
    void draw();
    bool step();
    void startModeling(double time);
};


#endif // MODEL_H
