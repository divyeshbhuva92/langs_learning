// Write a C++ program to implement inheritance shown in fig.
// Write a member functions to accept & display the data.

#include <iostream>
#include <string>
using namespace std;

class employee{
    public:
    int emp_id;
    string emp_name;

    public:
    void get_details(){
        cout << "Enter employee id: ";
        cin >> emp_id;
        cout << "Enter name: ";
        cin >> emp_name;
    }
    void dispaly_details(){
        cout << "Enter employee id: " << emp_id << endl;
        cout << "Enter name: " << emp_name << endl;
    }
};

class emp_union{
    public:
    int member_id;
    public:
    void get_details(){
        cout << "Enter union member id: ";
        cin >> member_id;
    }
    void dispaly_details(){
        cout << "Enter name: " << member_id << endl;
    }
};

class emp_info: public employee, public emp_union{
    public:
    float basic_salary;
    public:
    void get_details(){
        employee::get_details();
        cout << "Enter basic salary: ";
        cin >> basic_salary;
    }
    void dispaly_details(){
        employee::dispaly_details();
        emp_union::dispaly_details();
        cout << "Enter name: " << basic_salary << endl;
    }
};

int main(){
    emp_info einfo;
    einfo.get_details();
    cout << "-----------------" << endl;
    einfo.dispaly_details();
    return 0;
}