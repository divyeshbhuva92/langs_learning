// write a program to find area of circle and rectangle using function overloading. Use function name 'shape'.

#include <iostream>
using namespace std;

double shape (int x, double pi = 3.14){
    double k;
    k = double(pi*x*x);
    return k;
}
double shape (double x, double y){
    double l;
    l = double(x * y);
    return l;
}
int main()
{
    int x;
    double ans1;
    double ans2;
    ans1 = shape(2);
    cout<<"Area of circle is : "<<ans1<<endl;
    ans2 = shape(2.5,5.5);
    cout<<"Area of rect is : "<<ans2<<endl;
    return 0;
}

//