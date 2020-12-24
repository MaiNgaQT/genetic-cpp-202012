#include <iostream>
#include "Canvas.h"
#include "DisplayResolution.h"

using namespace std;

int main(){
    DisplayResolution displayResolution (600, 800);
    Canvas canvas;
    DrawPoint p1 (10, 300);
    canvas.DrawPoint(p1, displayResolution);
    return 0;
}