// write a program to calculate area and perimeter of rectangle using heirarchical inheritance.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int wid, len;
    void getData()
    {
        cout << "Enter width : ";
        cin >> wid;
        cout << "Enter length : ";
        cin >> len;
    }
};

class areaOfRect : public Rectangle
{
public:
    int ans1;
    void area()
    {
        ans1 = wid * len;
        cout << "Area of rectangle : " << ans1 << endl;
    }
};

class perimOfRect : public Rectangle
{
public:
    int ans2;
    void perim()
    {
        ans2 = 2 * (wid + len);
        cout << "perimeter of rectangle : " << ans2 << endl;
    }
};

int main()
{
    areaOfRect a1;
    a1.getData();
    cout << "---------------------------------" << endl;
    a1.area();

    perimOfRect p2;
    p2.getData();
    cout << "---------------------------------" << endl;
    p2.perim();

    return 0;
}