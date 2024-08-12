// class name - rectangle, calculate perimeter of rectangle.
// use default & perameterized constructor
// use function for calculation of perimeter & display ans.

#include <iostream>
using namespace std;

class demo{
    float l,b,ans;
    public:
        demo(){         // default constructor
            l=10;
            b=20;
        }

        demo(float x, float y){     // parameterized constructor
            l=x;
            b=y;
        }

        void displayPerimeter(){
            ans = 2.0*(l+b);
            cout<< "perimeter of rectangle is : "<<ans<<endl;
        }
};

int main(){
    demo d1;
    d1.displayPerimeter();
    demo d2(4,7);
    d2.displayPerimeter();
}