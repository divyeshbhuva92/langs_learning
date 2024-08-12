// hybrid inheritance :  Example program.

#include <iostream>
using namespace std;

class A{
    public:
    void print(){
        cout<<"From class A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"From class B"<<endl;
    }
};
class C:public B{
    public:
    void display(){
        cout<<"From class C"<<endl;
    }
};
class D:public B{
    public:
    void print_last(){
        cout<<"From class D"<<endl;
    }
};

int main(){
    C obj;
    cout<<"------------------------"<<endl;
    obj.print();
    obj.show();
    obj.display();

    D obj1;
    cout<<"------------------------"<<endl;
    obj1.show();
    obj1.print_last();
    return 0;
}