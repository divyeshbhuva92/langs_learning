// Introduction to method overloading...

#include <iostream>
using namespace std;

// method overloading : functions with same name but different num of arguments/type of arguments
int sum (int x, int y){
    int k;
    k = x + y;
    return k;
}
double sum (double x, double y){
    double l;
    l = x + y;
    return l;
}

int main()
{
    int a,b,ans1; 
    double ans2;
    ans1 = sum (7,5);
    cout<<"answer 1 is : "<<ans1<<endl;
    ans2 = sum (3.2,5.2);
    cout<<"answer 2 is : "<<ans2<<endl;
    return 0;
}
