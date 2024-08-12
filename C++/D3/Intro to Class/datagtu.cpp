// Introductin of class in C++

#include <iostream>
using namespace std;

class gtu{
    public :    // access specifier
    int a;
    
    void getdata()
    {
        cout << "Enter value: ";
        cin >> a;
    }

    void printdata()
    {
        cout << "Your value is: "<<a;
    }
};

int main()
{
    gtu obj;
    obj.getdata();
    obj.printdata();
    return 0;
}