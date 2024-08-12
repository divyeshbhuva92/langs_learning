#include <iostream>
using namespace std;

class gtu{
    char name[10];
    int roll_no;
    public :    // access specifier
    
    void getdata()
    {
        cout<<"Enter name: ";
        cin >> name;
        cout<<"Enter roll no. : ";
        cin >> roll_no;
    }

    void printdata()
    {
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your roll number is: "<<roll_no<<endl;
    }
};

int main()
{
    gtu obj;
    obj.getdata();
    obj.printdata();
    return 0;
}