// Write a C++ program to perform arithmetic operations on two numbers. 
// (Use switch case).

#include <iostream>
using namespace std;

int main()
{
    float a,b,ans;
    char choice;
    cout<<"Enter 2 values : ";
    cin>>a>>b;
    cout<<"Enter choice : ";
    cin>>choice;

    switch (choice)
    {
    case '+':
        ans = a + b;
        cout<<ans<<endl;
        break;
    
    case '-':
        ans = a - b;
        cout<<ans<<endl;
        break;
    
    case '*':
        ans = a * b;
        cout<<ans<<endl;
        break;
    
    case '/':
        ans = a / b;
        cout<<ans<<endl;
        break;
    
    default:
        cout<<"Wrong input"<<endl;
        break;
    }
}