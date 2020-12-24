#ifndef DisplayResolution_H_
#define DisplayResolution_H_
class DisplayResolution{
    private:
        int Width, Height;
    public:
        DisplayResolution();
        DisplayResolution(int maxWidth, int maxHeight);
        int GetMaxWidth();
        int GetMaxHeight();
};

#endif