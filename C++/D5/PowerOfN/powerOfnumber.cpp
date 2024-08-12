// Write a C++ program to raise power of n by 3 using function.

#include <iostream>
using namespace std;

inline int cube (int x){    // inline --- reduce the exicution time.
    int k;
    k =  x*x*x;
    return k;   
}

int main()
{
    int n, ans;
    cout<<"Enter value :"<<endl;
    cin>>n;
    ans = cube(n);
    cout<<"Ans is :"<<ans<<endl;
    return 0;
}