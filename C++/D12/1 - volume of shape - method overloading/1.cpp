// Write a C++ program to find volume of cube, cylinder and rectangular box
// using concepts of function overloading.
// (volume of cube = s3, volume of cylinder is π*r2*h, volume of
// rectangular box is l*b*h)

#include <iostream>
using namespace std;
#define pi 3.14

class Vol
{
    int l, b, h, r;
    float ans;

public:
    float volOfShape(int x, int y)
    {
        r = x;
        h = y;
        ans = pi * r * r * h;
        return ans;
    }

    float volOfShape(float x)
    {
        l = x;
        ans = l * l * l;
        return ans;
    }

    float volOfShape(float x, float y, float z)
    {
        l = x;
        b = y;
        h = z;
        ans = l * b * h;
        return ans;
    }

    void displayVol()
    {
        cout << "Volume of shape is : " << ans << endl;
    }
};

int main()
{
    Vol v1, v2, v3;
    v1.volOfShape(2, 4);
    v1.displayVol();
    v2.volOfShape(3);
    v2.displayVol();
    v3.volOfShape(3, 4, 5);
    v3.displayVol();
}