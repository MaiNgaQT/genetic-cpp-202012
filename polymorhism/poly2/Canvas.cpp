#include "Canvas.h"
#include <vector>
#include "Figure.h"
using namespace std;
Canvas::Canvas(){}
void Canvas::DrawPoint (DrawPoint& p, DisplayResolution displayResolution){
    // vector<Point> listOfPoint = figure.Draw();
    // for (DrawPoint p : listOfPoint){
    //     //draw a point p on screen
    //     cout << "point (" << p.GetX() << " , " << p.GetY() << ") has been drawn on screen" << endl;
    // }
    cout << "point (" << p.GetX() << " , " << p.GetY() << ") has been drawn on screen" << endl;
}