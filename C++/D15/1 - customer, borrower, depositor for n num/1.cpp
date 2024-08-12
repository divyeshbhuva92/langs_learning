// Create three class customer, depositor and borrower.
// Design a base class customer (name, mobile).
// Derive a class depositor (acc_no, balance) from customer class.
// Derive a class borrower (loan_no, loan_amount) from depositor class.
// Write a C++ program using necessary member functions to read and display the details of ‘n’ customers.

#include <iostream>
using namespace std;

class Customer
{
public:
    string name, mobile_num;
    void getCustDetails()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter mobile number : ";
        cin >> mobile_num;
    }
    void showCustDetails()
    {
        cout << "Customer name : " << name << endl;
        cout << "Mobile : " << mobile_num << endl;
    }
};

class Depositor : public Customer
{
public:
    string acc_num;
    float acc_bal;
    void getAccDetails()
    {
        cout << "Enter Acc num : ";
        cin >> acc_num;
        cout << "Enter Balance : ";
        cin >> acc_bal;
    }
    void showAccDetails()
    {
        cout << "Acc : " << acc_num << endl;
        cout << "Balance : " << acc_bal << endl;
    }
};

class Borrower : public Depositor
{
public:
    string loan_num;
    float loan_amount;
    void getLoanDetails()
    {
        cout << "Enter loan number : ";
        cin >> loan_num;
        cout << "Enter loan amount : ";
        cin >> loan_amount;
    }
    void showLoanDetails()
    {
        cout << "Loan number : " << loan_num << endl;
        cout << "Loan amount : " << loan_amount << endl;
    }
};

int main()
{
    int n;
    cout << "Enter value : ";
    cin >> n;

    Borrower obj[n];
    for (int i = 0; i < n; i++)
    {
        obj[i].getCustDetails();
        obj[i].getAccDetails();
        obj[i].getLoanDetails();
    }
    for (int j = 0; j < n; j++)
    {
        cout << "------------------------" << endl;
        obj[j].showCustDetails();
        obj[j].showAccDetails();
        obj[j].showLoanDetails();
    }

    return 0;
}