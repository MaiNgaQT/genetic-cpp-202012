#ifndef Figures_H_
#define Figures_H_
class Point2D{
    double x, y;
public:
    void Set(double X0, double Y0);
    void Move(double dX, double dY);
    void Scale(double sX, double sY);
};
class Circle{
    Point2D Center;
    double Radius;
public:
    void Set(double Xo, double Yo, double r);
    void Move(double dX, double dY);
    double Area();
    double Perimeter();
};
#endif