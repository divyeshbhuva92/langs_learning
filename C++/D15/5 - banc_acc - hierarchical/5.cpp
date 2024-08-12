// Make class with name "Bank". Its data members are Acc_num & name.
// Create 2 classes from "Bank"--->>> 1. "savings", 2. "current".
// Write a function "getBal" in which ask for balance and if its less than 2000 in saving account, then display "insufficient balance".
// Write a function "getBal" in which ask for balance and if its less than 5000 in current account, then display "insufficient balance".

#include <iostream>
using namespace std;

class Bank
{
public:
    int acc_num;
    string name;
    void getCustomerDetails()
    {
        cout << "Enter Account Name : ";
        cin >> name;
        cout << "Enter Account number : ";
        cin >> acc_num;
    }
    void showCustomerDetails()
    {
        cout << "Account holder name : " << name << endl;
        cout << "Account number : " << acc_num << endl;
    }
    void CheckBal(float avil_bal, int min_bal)
    {
        if (avil_bal < min_bal)
        {
            cout << "Your account has insufficient balance" << endl;
        }
        else
        {
            cout << "Your account balance is : " << avil_bal << endl;
        }
    }
};

class Saving_Acc : public Bank
{
public:
    float saving_acc_bal;
    void getBal()
    {
        cout << "Enter Saving account balance : ";
        cin >> saving_acc_bal;

        // if (saving_acc_bal < 2000)
        // {
        //     cout<<"--------------------"<<endl;
        //     cout<<"Your account has insufficient balance"<<endl;
        // }
        Bank::CheckBal(saving_acc_bal, 2000);
    }
};

class Current_Acc : public Bank
{
public:
    float current_acc_bal;
    void getBal()
    {
        cout << "Enter current account balance : ";
        cin >> current_acc_bal;

        // if (current_acc_bal < 5000)
        // {
        //     cout<<"--------------------"<<endl;
        //     cout<<"Your account has insufficient balance"<<endl;
        // }
        Bank::CheckBal(current_acc_bal, 5000);
    }
};

int main()
{
    Current_Acc obj;
    obj.getCustomerDetails();
    obj.showCustomerDetails();
    cout << "--------------------" << endl;
    obj.getBal();
    cout << "--------------------" << endl;
    Saving_Acc obj1;
    obj1.getBal();

    return 0;
}
