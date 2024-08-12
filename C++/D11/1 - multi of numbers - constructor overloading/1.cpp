// Write a c++ program to calculate multiplication of two numbers and three numbers using constructor overloading.

#include <iostream>
using namespace std;

class multi
{
    int a, b, c, ans;

public:
    multi(int x, int y)
    {
        a = x;
        b = y;
        ans = x * y;
    }

    multi(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        ans = x * y * z;
    }

    void displayAns()
    {
        cout << "Ans of multiplication of values is : " << ans << endl;
    }
};

int main()
{
    multi c1(2, 5);
    multi c2(2, 5, 6);
    return 0;
}