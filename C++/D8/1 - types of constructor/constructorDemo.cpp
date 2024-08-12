// program to understand types of constructor.

#include <iostream>
using namespace std;

class demo
{
    float l, b, ans;

public:
    demo()
    { // default constructor
        l = 10;
        b = 20;
        ans = l * b;
        cout << "Ans from default constructor is : " << ans << endl;
    }

    demo(float x, float y)
    { // parameterized constructor
        l = x;
        b = y;
        ans = l * b;
        cout << "Ans from parameterized constructor is : " << ans << endl;
    }
};

int main()
{
    demo d1;
    demo d2(4.5, 5);
}