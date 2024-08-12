// static function...

#include <iostream>
using namespace std;

class test{
    int code;
    static int count;
    
    public:
    void setcode(){
        code = ++count;
    }
    static void showcount(){
        cout << "count is " << count << endl;
    }
};

int test::count;

int main(){
    test t1, t2, t3;
    t1.setcode();
    t2.setcode();

    test::showcount();

    cout << "------------------" << endl;

    t3.setcode();
    test::showcount();
    return 0;
}