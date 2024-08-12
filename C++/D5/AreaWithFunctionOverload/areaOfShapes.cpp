// Write a C++ program to find area of triangle, circle, and rectangle using function overloading.
// triangle - 1/2 b*h,    circle - pi r*r,    rectangle - b*l

#include <iostream>
using namespace std;

float areaOfShape (float x, float y){
    float k;
    k = (0.5 * x * y);
    return k;
}
double areaOfShape (int x, double pi = 3.14){
    double l;
    l = double(pi*x*x);
    return l;
}
double areaOfShape (double x, double y){
    double m;
    m = double(x * y);
    return m;
}

int main(){
    int x;
    float ans1;
    double ans2;
    double ans3;
    ans1 = areaOfShape(2,2.5);
    cout<<"Area of triangle is : "<<ans1<<endl;
    ans2 = areaOfShape(2);
    cout<<"Area of circle is : "<<ans2<<endl;
    ans3 = areaOfShape(2.5,5);
    cout<<"Area of rectangle is : "<<ans3<<endl;
    return 0;
}