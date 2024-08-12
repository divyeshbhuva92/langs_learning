// multiple inheritance --------------------------------

#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "University" << endl;
    }
};

class B{
    public:
    void show(){
        cout << "Engineering" << endl;
    }
};

class C: public A, public B{
    public:
    void message(){
        cout << "SURAT" << endl;
    }
};

int main(){
    C obj;
    obj.display();
    obj.show();
    obj.message();
    return 0; 
}
