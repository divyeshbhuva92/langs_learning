// Write a C++ program to find area of rect(base class), area of triangle(derived class) using function overriding.

#include <iostream>
using namespace std;

class Rect
{
public:
    int l, b, ans;

    void AreaOfShape(int l, int b)
    {
        ans = l * b;
        cout << "Area of rectanngle is : " << ans << endl;
    }
};
class Triangle : public Rect
{
public:
    int h, b;
    float ans1;

    void AreaOfShape(float h, float b)
    {
        ans1 = 0.5 * b * h;
        cout << "Area of triangle is : " << ans1 << endl;
    }
};

int main()
{
    Triangle t1, t2;
    t1.AreaOfShape(2, 5);
    t2.Rect::AreaOfShape(3, 5);
    return 0;
}