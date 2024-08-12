// to understand "friend function"
// --- its used to access private & protected data of class.
// --- it can't be called using object. / it can be called like normal function without using object.
// --- it can't access members directly but it can access using object name & dot operator.

#include <iostream>
using namespace std;

class test{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

    friend void func();
};

void func() {
    test t;
    t.a = 10;
    t.b = 20;
    t.c = 30;
    cout << t.a << " " << t.b << " " << t.c << endl;
};

int main() {
    func();
    return 0;
}