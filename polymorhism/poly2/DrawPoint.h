#ifndef Point_H_
#define Point_H_
class DrawPoint{
    private:
        float x, y; // điểm trong không gian trừu tượng
    public:
        DrawPoint();
        DrawPoint(float x, float y);
        float GetX();
        float GetY();
};
#endif