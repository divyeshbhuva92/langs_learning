// Write a C++ program to find a max number from 2 numbers with teranary operator.

#include <iostream>
using namespace std;

int main()
{
    int a,b,max;
    cout << "Enter values:" << endl;
    cin >> a >> b;

    // if(a>b){
    //     max = a;
    // }
    // else{
    //     max = b;
    // }

   
    max = a>b ? a:b;    // teranary op
    
    cout << "Max value is: " << max;
    return 0;
}