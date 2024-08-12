// program to understand constructor.

#include <iostream>
using namespace std;

class gtu {
    public:
    int a,b;
    gtu(){     // class name and function name same then its called constructor.
        a=10;
        b=20;
    }
    void display(){
        cout<<a<<" and "<<b<<endl;
    }
};

int main() {
    gtu obj;
    obj.display();
    return 0;
}