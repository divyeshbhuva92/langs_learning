// Inheritance ::----------------------------------------------------------------
// multi level inheritance --------------------------------

#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "University" << endl;
    }
};

class B: public A{
    public:
    void message(){
        cout << "Collage" << endl;
    }
};

class C: public B{
    public:
    void show(){
        cout << "Department" << endl;
    }
};

int main(){
    C obj;
    obj.display();
    obj.message();
    obj.show();
    return 0;
}