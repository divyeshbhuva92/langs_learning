// C++ program for get & print data of 3 employees, using class.
// class name - Employee,
// data members - name, expireance, salary,
// function name - 1. getInfo, 2. DisplayInfo

#include <iostream>
using namespace std;

class employee
{
public: // access specifier
    char name[10];
    float years;
    float salary;

    void getInfo()
    {
        cout << "Employee name: ";
        cin >> name;
        cout << "Enter Experience(in years) : ";
        cin >> years;
        cout << "Enter salary : ";
        cin >> salary;
    }

    void displayInfo()
    {
        cout << "Emplyee name is: " << name << endl;
        cout << name << " has " << years << "years of experience & " << "current salary is " << salary << endl;
    }
};

int main()
{
    employee obj[3];
    for (int i = 0; i < 3; i++)
    {
        obj[i].getInfo();
    }
    cout << "" << endl;
    for (int i = 0; i < 3; i++)
    {
        obj[i].displayInfo();
    }
    return 0;
}