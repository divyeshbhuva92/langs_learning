// Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square.

#include <iostream>
using namespace std;

class AreaOfShape
{
    float l, b, ans;

public:
    void showAreaofShape(float x, float y)
    {
        l = x;
        b = y;
        ans = float(x * y);
        cout << "Area of rect is : " << ans << endl;
    }
    void showAreaofShape(float x)
    {
        l = x;
        ans = float(x * x);
        cout << "Area of rect is : " << ans << endl;
    }
};

int main()
{
    AreaOfShape a1;
    a1.showAreaofShape(2, 5);
    a1.showAreaofShape(2);
    return 0;
}