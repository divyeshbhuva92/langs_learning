// function with arguments in class.

#include <iostream>
using namespace std;

class gtu
{
    string name;
    int age;

public:
    void receive(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Your name is " << name << endl;
        cout << "Your age is " << age << endl;
    }
};

int main()
{
    gtu obj;
    obj.receive("Dev", 12);
    obj.display();
    return 0;
}