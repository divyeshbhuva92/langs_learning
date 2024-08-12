// function with default value/arguments

#include <iostream>
using namespace std;
int add (int x, int y = 5);  //function with default value

int main()
{
    int ans;
    ans = add(6);
    cout<<"answer is : "<<ans<<endl;
    ans = add(2,10);
    cout<<"answer is : "<<ans<<endl;
    return 0;
}

int add (int x, int y){
    int k;
    k = x + y;
    return k;
}