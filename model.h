#ifndef MODEL_H
#define MODEL_H
#include <QGraphicsScene>
#include <cmath>
#include <ctime>

///Global constants
const long double MASS = 1.6e-23;
const long double CHARGE = 1.6e-19;



struct GlobalSettings;

class HeadPoint{
protected:
    double x, y;        ///>Coordinates
    double speed[2];    ///>Velocity

public:
    HeadPoint(double x_ = 0, double y_ = 0, double velocityX = 0, double velocityY = 0);
    HeadPoint(const HeadPoint&) = default;
    HeadPoint& operator= (const HeadPoint&) = default;
    ~HeadPoint() = default;

    ///Move the head point to small displasment
    bool move(long double qe, long double qb, long double m, GlobalSettings& settings);

    ///Get circle for drawing with R = lineHeight
    QRectF getCircle(int lineHeight) const;

};



/// Struct with global settings
struct GlobalSettings{
    int windowWidth;
    int windowHeight;
    int lineHeight;
    int scale;
    long double step;
    int animationSpeed;
};



/// Main class of modeling
class Model{
    QGraphicsScene* window;         ///< source window
    HeadPoint head;                 ///< head point
    GlobalSettings settings;        ///< some settings
    double velocity;                ///< speed of the point in the start position
    double alpha;                   ///< angle between velocity and OX
    double e;                       ///< electric strength
    double b;                       ///< magnetic induction
    long double charge;             ///< chrage of the particle
    long double mass;               ///< mass of the particle
public:
    Model(QGraphicsScene* window_, double velocity_, double alpha_, double e_, double b_, const GlobalSettings& settings_,
          long double charge_, long double mass_);
    Model(const Model& a) = default;
    Model& operator= (const Model& a) = default;
    ~Model() = default;

    /// Make a step
    bool step();

protected:
    /// Draw new circle with head point cords
    void draw();
};


#endif // MODEL_H
