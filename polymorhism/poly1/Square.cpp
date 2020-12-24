#include "Square.h"
Square::Square(){}
Square::Square(float a){
    width = height = a;
}
void Square::Input (std::istream& inDev){
    inDev >> width;
    height = width;
}