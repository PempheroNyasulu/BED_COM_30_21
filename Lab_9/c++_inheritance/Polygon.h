#pragma once

class Polygon {
    protected:
    int mWidth
    int mHeight;
    public:
    void SetValues(int width, int hieght);
    virtual int Area() = 0;
    void PrintArea();
};