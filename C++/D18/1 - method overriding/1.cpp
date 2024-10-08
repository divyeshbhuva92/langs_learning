//method overriding :---->>

#include <iostream>
using namespace std;

class base{
    public:
    void display(){
        cout << "Function of base class" << endl;
    }
};

class derived: public base{
    public:
    void display(){
        cout << "Function of derived class" << endl;
    }
};

int main(){
    derived d1, d2;
    d1.display();
    d2.base::display();     // access overridden function of base class
    return 0;
}