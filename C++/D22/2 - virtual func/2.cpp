// virtual function....
// `virtual function` is a function that is declared within base class & redifine by derived classes.
// It is used to achieve `run time polymorphism`.
// `virtual function` should be accessed using the pointer.

#include <iostream>
using namespace std;
 

class base {
    public:
    virtual void print(){
        cout << "print base class\n";
    }
    void show(){
        cout << "show base class\n";
    }
};
 

class derived : public base {
    public:
    void print(){
        cout << "print derived class\n";
    }
    void show(){
        cout << "show derived class\n";
    }
};
 

int main(){
    base* bptr;       // int a ---> normal variable, int *a ---> pointer variable
    derived d;
    bptr = &d;
    
    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();
    return 0;
}

// Explaination :-
// The base class pointer can point objects of base class & derived class.
// The  `bptr` contains address of object `d`.
// The `show` function is non-virtual, so it will provide output from base class.
// The `print` function is virtual, so it will provide output from derived class.