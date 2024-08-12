// hierarchical inheritance :----->

#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "From A (parent) class" << endl;
    }
};
class B:public A{
    public:
    void show(){
        cout << "From B (first child) class" << endl;
    }
};
class C:public A{
    public:
    void provide(){
        cout << "From C (second child) class" << endl;
    }
};

int main(){
    C obj;
    obj.display();
    obj.provide();
    cout << "----------------" << endl;
    B obj11;
    obj11.display();
    obj11.show();
}