// Find a area of circle using class.

#include <iostream>
using namespace std;

class area_of_circle
{
    float r, ans;

public:
    void read()
    {
        cout << "Enter radius : ";
        cin >> r;
    }
    void calculate()
    {
        ans = 3.14 * r * r;
    }
    void show()
    {
        cout << "Area of circle is : " << ans << endl;
    }
};

int main()
{
    area_of_circle obj;
    obj.read();
    obj.calculate();
    obj.show();
}