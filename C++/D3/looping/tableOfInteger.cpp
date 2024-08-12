// Introduction to loop.
// Write a C++ program to generate table of given number.

#include <iostream>
using namespace std;

int main()
{
    int i,k,a;
    cout << "table of : ";
    cin >> a;

    for (i = 1; i <= 10; i++)
    {
        k = a * i;
        cout << a << " x " << i << " = " << k << endl;
    }    
    return 0;
}