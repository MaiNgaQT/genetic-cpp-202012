#include <iostream>
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main(){
    Rectangle r;
    r.Input (cin);
    cout << "Area of rectangle is" << r.Area() << endl;

    Square sq;
    sq.Input (cin);
    cout << "Area of square is " << sq.Area() << endl;

    Rectangle* pRec;
    pRec = new Square();
    pRec->Input(cin);
    cout << pRec->Area() << endl;
    return 0;
}