// Inheritance ::----------------------------------------------------------------
// single level inheritance --------------------------------

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

int main(){
    B obj;
    obj.display();
    obj.message();
    return 0;
}