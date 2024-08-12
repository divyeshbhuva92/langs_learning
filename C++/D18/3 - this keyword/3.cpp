// using of "this" keyword.

#include <iostream>
using namespace std;

class base{
    int val;
    public:
    void set(int val){
      this->val = val;
    }

    void show(){
        cout <<"Value is : "<< val << endl;
    }
};

int main(){
    base obj;
    obj.set(50);
    obj.show();
    return 0;
}