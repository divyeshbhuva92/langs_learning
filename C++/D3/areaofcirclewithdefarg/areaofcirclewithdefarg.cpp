//function with default arguments...
// Write a C++ program to find area of circul using function(default arguments).

#include <iostream>
using namespace std;

float area (int x, float pi = 3.14); // variable declared as argument
int main()
{
    int x;
    float ans;
    ans = area(2);
    cout << "answer is : " << ans << endl;
    return 0;
}

float area (int x, float pi){
    float k;
    k = float(pi*x*x);
    return k;
}