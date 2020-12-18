#include "Figures.h"
void Point2D::Set(double Xo, double Yo){
    x = Xo;
    y = Yo;
}
void Point2D::Move(double dX, double dY){
    x += dX;
    y += dY;
}
void Point2D::Scale(double sX, double sY){
    x *= sX;
    y *= sY;
}
const double PI = 3.14159;
void Circle::Set(double Xo, double Yo, double r){
    Center.Set(Xo, Yo);
    if (r < 0) Radius = 0;
    Radius = r;
}
void Circle::Move(double dX, double dY){
    Center.Move(dX, dY);
}
double Circle::Area(){
    return Radius * Radius * PI;
}
double Circle::Perimeter(){
    return 2 * Radius * PI;
}