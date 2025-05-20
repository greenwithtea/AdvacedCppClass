#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;
    int area;

public:

    //setter

    void setWidth(int w);
    void setHeight(int h);

    //getter

    int getWidth();
    int getHeight();
    int getArea();

};


// setter body 구현

void Rectangle::setWidth(int w)
{
    width = w;
}

void Rectangle::setHeight(int h)
{
    height = h;
}


//getter body 구현

int Rectangle::getWidth()
{
    return width;
}

int Rectangle::getHeight()
{
    return height;
}

int Rectangle::getArea()
{
    area = width * height;
    return area;
}

int main()
{
    Rectangle r1;

    r1.setHeight(3);
    r1.setWidth(7);

    cout << "Width = " << r1.getWidth() << endl;
    cout << "Height = " << r1.getHeight() << endl;
    cout << "Area = " << r1.getArea() << endl << endl;
    return 0;
}
