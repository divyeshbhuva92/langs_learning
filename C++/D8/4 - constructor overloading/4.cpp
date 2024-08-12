// to understand constructor overloading.

#include <iostream>
using namespace std;


class demo{
    float l,b,ans;
    public:
        demo(float x, float y){     // parameterized constructor
            l=x;
            b=y;
            cout<< "l : "<<l<<" & b : "<<b<<endl;
        }
        demo(float x, float y, float z){     // copy constructor]
            l=x;
            b=y;
            ans=z;
            cout<< "from copy constructor --->> l : "<<l<<" & b : "<<b<<" & ans is : "<<ans<<endl;
        }
};

int main(){
    demo d1(4,5);
    demo d2(4,5,0);
}