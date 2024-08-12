// passing object as an arguments

#include <iostream>
using namespace std;

class demo{
    int a;
    public:
    void set(int x){
        a=x;
    }

    void sum(demo o1, demo o2){    //copy constructor
        a= o1.a + o2.a;
    }

    void display(){
        cout<<a<<endl;
    }
};

int main(){
    demo d1, d2, d3;
    d1.set(10);
    d2.set(20);
    d3.sum(d1,d2);   // pass objects (d1, d2) as an arguments
    d1.display();
    d2.display();
    d3.display();
    return 0; 0;
}