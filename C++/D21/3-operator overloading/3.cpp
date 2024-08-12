// operator overloading ... 

#include <iostream>
using namespace std;

class testclass{
    int count;
    
    public:
    testsclass(){
        count = 5;
    }

    void operator --(){
        count = count - 2;
    }
    void display(){
        cout << count << endl;
    }
};

int main(){
    testclass t;
    --t;
    t.display();

    return 0;
}