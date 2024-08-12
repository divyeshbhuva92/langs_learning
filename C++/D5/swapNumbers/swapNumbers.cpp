// Write a C++ program to swap two numbers - With function.

#include <iostream>
using namespace std;

void swapNum (int a, int b){
    float temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swap : "<<"a = "<<a<<", "<<"b = "<<b<<endl;
}

int main()
{
    int a,b; 
    cout<<"Enter 2 values:";
    cin>>a>>b;
    cout<<"Before swap : "<<"a = "<<a<<", "<<"b = "<<b<<endl;
    swapNum(a,b);
    return 0;
}

