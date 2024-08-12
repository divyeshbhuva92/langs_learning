// Create a class 'Student' with three data members which are name, age and address. The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available". It has two functions setinfo and getinfo to read and print these parameters.

#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    string address;

    Student(){
        name="unknown";
        age=0;
        address="not available";
    }

    void setInfo(string n, int a, string h){
        name = n;
        age = a;
        address = h;
    }
    void displayInfo(){
        cout<<"Student name: "<<name<<" age: "<<age<<" address : "<<address<<endl;
    }
};

int main(){
    Student s1;
    s1.displayInfo();
    s1.setInfo("Dev", 25, "xyz");
    s1.displayInfo();
}