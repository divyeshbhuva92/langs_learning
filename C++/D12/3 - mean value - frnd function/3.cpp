// find mean value of 2 numbers using friend function.

#include <iostream>
using namespace std;

class base {
    int val1, val2;
    
    public:
    void getData() {
        cout << "Enter values:";
        cin >> val1>>val2;
    }
    friend float meanVal(base b1);
    
};

float meanVal(base b1) {
    cout << b1.val1 << " " << b1.val2 << endl;
    return (float(b1.val1 + b1.val2) / 2);
}

int main() {
    base obj;
    obj.getData();
    float res = meanVal(obj);
    cout << "\n Mean value is : " << res;

    return 0;
}