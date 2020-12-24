#ifndef myui_MyCanvas_H_
#include myui_MyCanvas_H_
#include "../ui/Canvas.h"
class MyCanvas: public Canvas{
    public:
        MyCanvas():Canvas();
        void MyDraw();
};
#endif