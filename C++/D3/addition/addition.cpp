// Introduction to function
// Write a C++ program to find the sum of 2 numbers.

#include <iostream>
using namespace std;
int add (int x, int y);

int main()
{
    int a,b,ans;
    cout << "Enter 2 values:";
    cin >> a >> b;
    ans = add (a,b);
    cout << "answer is : " << ans << endl;
    return 0;
}

int add (int x, int y){
    int k;
    k = x + y;
    return k;
}