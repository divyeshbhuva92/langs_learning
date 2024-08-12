//scope resolution operator

#include <iostream>
using namespace std;

class operate{
    public:
    void func();
};

void operate::func(){   // access function outside of the class.
    cout << "I'm in class." <<endl;
}

int main(){
    operate o1;
    o1.func();
    return 0;
}