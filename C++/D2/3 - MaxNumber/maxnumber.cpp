//Write a C++ program to find the maximum number out of the given 3 numbers.

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,max;
    cout << "Enter values:" << endl;
    cin >> a >> b >> c;
    
    //ladder if else........

    // if((a>b) && (a>c)){
    //     max = a;
    // }
    // else if((b>c) && (b>a)){
    //     max = b;
    // }
    // else{
    //     max = c;
    // }

    //nested if else........
    if(a>b){
        if(a>c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b>c){
            max = b;
        }
        else{
            max = c;
        }
    }

    cout<<"Max value is: "<<max;
    return 0;
}