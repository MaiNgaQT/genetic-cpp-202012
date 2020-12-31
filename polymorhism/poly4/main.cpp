#include <iostream>
#include"Line.h"
using namespace std;
int main ()
{
    IShape* shape = new Line();
    // Gọi một số hàm setup cho shape
    //...
    // Vẽ shape
    shape->move_x(10);
    shape->move_y(20);
    // shape->draw();
    //...
}