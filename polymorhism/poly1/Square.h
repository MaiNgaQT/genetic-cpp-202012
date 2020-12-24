#ifndef Square_H_
#define Square_H_
#include "Rectangle.h"
class Square: public Rectangle{
    public:
        Square();
        Square(float a);
        void Input (std::istream& inDev);
};
#endif