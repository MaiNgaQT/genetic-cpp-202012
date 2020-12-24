#include <iostream>
#include "ui/Point.h"
#include "ui/Canvas.h"
using namespace std;

int main(){
    Canvas canvas;
    Point* p1 = new Point(1, 2);
    canvas.Draw(p1);
    //giả sử ko sửa được Point và Canvas nhưng cần vẽ nhiều điểm
    return 0;
}