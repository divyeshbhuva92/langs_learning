// Write a c++ program to define a class ‘employee’ to store records of 4 employees of company.
// including following members:
// Data member: (1) Emp_id (2) Emp_name (3) Emp_dept
// Member Functions: (1)getdata() (2)displaydata().

#include <iostream>
using namespace std;

class employee
{
    string Emp_name;
    int Emp_id;
    string Emp_dept;

public:
    void getData()
    {
        cout << "Emp id : ";
        cin >> Emp_id;
        cout << "Emp name : ";
        cin >> Emp_name;
        cout << "Emp dept : ";
        cin >> Emp_dept;
    }
    void displayData()
    {
        cout << "Employee id : " << Emp_id << endl;
        cout << "Employee name : " << Emp_name << endl;
        cout << "Department : " << Emp_dept << endl;
        cout << "---------------" << endl;
    }
};

int main()
{
    employee Emp[4];
    for (int i = 0; i <= 3; i++)
    {
        Emp[i].getData();
    }
    cout << " " << endl;
    for (int i = 0; i <= 3; i++)
    {
        Emp[i].displayData();
    }
    return 0;
}