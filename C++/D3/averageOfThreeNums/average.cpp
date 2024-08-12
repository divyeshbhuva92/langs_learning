// Write a C++ program to find average of 3 numbers.

#include <iostream>
using namespace std;
float avg (int x, int y, int z);

int main()
{
    float ans;
    int a,b,c;
    cout << "Enter 3 values:";
    cin >> a >> b >> c;
    ans = avg (a,b,c);
    cout << "answer is : "<< ans << endl;
    return 0;
}

float avg (int x, int y, int z){
    float k;
    // k = (x + y + z)/3.0;      // implicit type conversion
    k = (float(x + y + z))/3;    // explicit type conversion
    return k;
}