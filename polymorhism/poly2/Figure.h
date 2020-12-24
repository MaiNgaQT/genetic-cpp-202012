#ifndef Figure_H_
#define Figure_H_
#include <vector>
#include "DisplayResolution.h"
#include "DrawPoint.h"
using namespace std;
class Figure{
    public:
        Figure();
        virtual vector<Point> Draw(DisplayResolution dispplayResolution);//lấy về các điểm cho Canvas vẽ
};

#endif