#include"Line.h"
#include<iostream>
using namespace std;
void Line::move_x(int dx){
    x += dx;
}
void Line::move_y(int dy){
    y += dy;
}
// void Line::draw(){
//     cout << x << " " << y;
// }