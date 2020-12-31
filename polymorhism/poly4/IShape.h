#ifndef poly4_IShape_H_
#define poly4_IShape_H_
class IShape{
public:
    virtual void move_x(int x) = 0;
    virtual void move_y(int y) = 0;
    virtual void draw() = 0;
};
#endif