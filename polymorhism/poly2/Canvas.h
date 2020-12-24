#ifndef Canvas_H_
#define Canvas_H_
#include "DisplayResolution.h"
#include "Figure.h"
#include "DrawPoint.h"
//vex hình lên khung có độ phân giải
class Canvas{
    public:
        Canvas();
        //void Draw (Figure& figure, DisplayResolution displayResolution);
        void DrawPoint (DrawPoint& p, DisplayResolution displayResolution);
};
#endif