#include "Canvas.h"
#include <iostream>
//include <drive_library> //thu vien dieu khien man hinh
Canvas::Canvas(){
    //load drive
}
void Canvas::Draw (Point* p){
    //draw point in screen
    cout << "draw (" << p->GetX() << ", " << p->GetY() << ")" << endl;
}