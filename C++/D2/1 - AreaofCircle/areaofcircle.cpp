// Write a C++ program to find the area of the circle.

#include <iostream>
using namespace std;

#define pi 3.14

int main()
{
    float r,a;
    cout << "Enter radius:";
    cin >> r;
    a = pi*r*r;
    cout << "Area of circle is: " << a;
    return 0;
}

