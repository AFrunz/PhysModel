#include "model.h"
#include <QDebug>


// HeadPoint

HeadPoint::HeadPoint(double x_, double y_, double velocityX, double velocityY):x(x_), y(y_){
    speed[0] = velocityX;
    speed[1] = velocityY;
}

bool HeadPoint::move(long double qe, long double qb, long double m, GlobalSettings& settings){
    double ay = (-qe + qb * speed[0]) / m;
    double ax = - qb * speed[1] / m;
    speed[0] += ax * settings.step;
    speed[1] += ay * settings.step;
    x += speed[0] * settings.step * settings.scale;
    y += speed[1] * settings.step * settings.scale;
    if (x > settings.windowWidth || y > settings.windowHeight || y < 0){
        return false;
    }
    return true;
}

QRectF HeadPoint::getCircle(int lineHeight) const{
    double dif = lineHeight * sqrt(2);
    QRectF rect(x - dif, y + dif, lineHeight * 2, lineHeight * 2);
    return rect;
}


// Model

Model::Model(QGraphicsScene* window_, double velocity_, double alpha_, double e_, double b_,const GlobalSettings& settings_,
      long double charge_ = CHARGE, long double mass_ = MASS):
      window(window_), head(10, settings_.windowHeight / 2, velocity_ * std::cos(alpha_), velocity_ * std::sin(alpha_)),
      settings(settings_), velocity(velocity_), alpha(alpha_), e(e_), b(b_), charge(charge_), mass(mass_){
    window->addLine(10, settings_.windowHeight / 2,  10 + 30 * std::cos(alpha_), settings_.windowHeight / 2 + 30 * std::sin(alpha_));
}

bool Model::step(){
    bool flag = head.move(charge * e, charge * b, mass, settings);
    draw();
    return flag;
}

void Model::draw(){
    window->addEllipse(head.getCircle(settings.lineHeight), QPen(Qt::blue), QBrush(Qt::blue));
}





