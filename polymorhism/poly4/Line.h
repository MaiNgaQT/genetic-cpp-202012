#ifndef poly4_Line_H_
#define poly4_Line_H_
#include"IShape.h"
class Line : public IShape
{
public:
    // virtual ~Line();
    virtual void move_x(int x); // class Line sẽ phải có code cụ thể của hàm move_x
    virtual void move_y(int y); // class Line sẽ phải có code cụ thể của hàm move_y
    virtual void draw(); // class Line sẽ phải có code cụ thể của hàm draw
private:
    int x, y;
//...
};
#endif