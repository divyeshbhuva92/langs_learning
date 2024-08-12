#include <iostream>
using namespace std;

// to avoid function delcaration, put function defination above main()
int sum (int x, int y){
    int k;
    k = x + y;
    return k;
}

int main()
{
    int a,b,ans; 
    cout<<"Enter 2 values:";
    cin>>a>>b;
    ans = sum (a,b);
    cout<<"answer is : "<<ans<<endl;
    return 0;
}

