//scope resolution operator

#include <iostream>
using namespace std;

int m = 50;
int main(){
    int m =100;
    cout << "value is : " << m << endl;
    cout << "value is : " <<::m << endl;   // access global variable
    return 0;
}