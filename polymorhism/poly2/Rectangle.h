#ifndef Rectangle_H_
#define Rectangle_H_
#include <vector>
class Rectangle{
    private:
        float x1, y1, x2, y2;
    public:
        Rectangle(float x1, float y1, float x2, float y2);
        //tọa độ trên màn hình phải kiểu nguyên, pixel
        vector<int, int> Draw(DisplayResolution &displayResolution);
};
#endif