// write a program for sum of 2 values using multi level inheritance.
// use grandParent class to get 1st value, parent class to get 2nd value &
// child class to do sum of them & display it.

#include <iostream>
using namespace std;

class AA
{
public:
    int val1;
    void getData1()
    {
        cout << "Enter 1st val : ";
        cin >> val1;
    }
};

class BB : public AA
{
public:
    int val2;
    void getData2()
    {
        cout << "Enter 2nd val : ";
        cin >> val2;
    }
};

class CC : public BB
{
public:
    void add()
    {
        cout << "-------------------- " << endl;
        cout << "Sum of val1 & val2 is : " << (val1 + val2) << endl;
    }
};

int main()
{
    CC obj;
    obj.getData1();
    obj.getData2();
    obj.add();
    return 0;
}
