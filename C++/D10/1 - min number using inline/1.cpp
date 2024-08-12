// Write a C++ program to find minimum of two given numbers using inline 
// function.(ternary operator)

#include <iostream>
using namespace std;

inline int showMin(int a, int b){
    int ans;
    ans =  a<b ? a:b;
    return ans;
}

int main(){
    int a, b, ans;
    cout<<"Enter a numbers : ";
    cin >> a >> b;
    ans = showMin(a, b);
    cout<<"Min num is : "<<ans << endl;
    return 0;
}