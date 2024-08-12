// to understand copy constructor.

#include <iostream>
using namespace std;

class demo
{
    float l, b, ans;

public:
    demo(float x, float y)
    { // parameterized constructor
        l = x;
        b = y;
        cout << "l : " << l << " & b : " << b << endl;
    }
    demo(demo &r)
    { // copy constructor, r = object name
        l = r.l;
        b = r.b;
        cout << "from copy constructor --->> l : " << l << " & b : " << b << endl;
    }
};

int main()
{
    demo d1(4, 5);
    demo d2(d1);
}