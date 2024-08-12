// Write a program where you define a class A. which takes two variables int a 
// and int b. Class B inherits Class A and adds two variable defined in class 
// A.Make function get_data and Print_data in class A. Define function Add in 
// class B.

#include <iostream>
using namespace std;

class A{
    public:
    int a, b, ans;

    public:
    void get_data(){
        cout << "Enter value : ";
        cin >> a >> b;
    }
    void Print_data(){
        cout << "sum of value is : " << ans << endl;
    }
};

class B : public A{
    public:
    void Add(){
        ans = a + b;
    }
};

int main(){
    B b1;
    b1.get_data();
    b1.Add();
    b1.Print_data();
}