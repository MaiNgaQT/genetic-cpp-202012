#ifndef Rectangle_H_
#define Rectangle_H_
#include <iostream>
class Rectangle{
    protected:
        float width, height;
    public: 
        Rectangle ();
        Rectangle (float w, float h);
        void Input (std::istream& inDev);
        float Area();
};
#endif