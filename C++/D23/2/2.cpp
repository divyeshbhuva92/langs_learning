// Design a base class university(college_name, city).
// derived a class college(course_name, pin_code) from university class.
// derived a class department(branch_name,total_students) from college class
// use member functions to read and display details of 3 colleges.

#include <iostream>
#include <string>
using namespace std;

class university{
    public:
    string collage_name, city;

    public:
    void get_details(){
        cout << "Enter collage name: ";
        cin >> collage_name >> endl;
        cout << "Enter city: ";
        cin >> city >> endl;
    }
    void display_details(){
        cout << "Collage : " << collage_name << endl;
        cout << "City : " << city << endl;
    }
};

class collage: public university{
    public:
    string course_name;
    int pin_code;

    public:
    void get_details(){
        university::get_details();
        cout << "Enter course name: ";
        cin >> course_name >> endl;
        cout << "Enter pincode: ";
        cin >> pin_code >> endl;
    }
    void display_details(){
        university::display_details();
        cout << "Course : " << course_name << endl;
        cout << "PIN code : " << pin_code << endl;
    }
};

class department: public college{
    public:
    string branch_name;
    int total_students;

    public:
    void get_details(){
        cout << "Enter branch name: ";
        cin >> branch_name >> endl;
        cout << "Enter Total number of students: ";
        cin >> total_students >> endl;
    }
    void display_details(){
        cout << "Branch : " << branch_name << endl;
        cout << "Total students : " << total_students << endl;
    }
};

int main(){
    collage clg[3];

    for (int i = 0; i < 3; i++)
    {
        clg[i].get_details();
    }
    for (int i = 0; i < 3; i++)
    {
        clg[i].display_details();
    }
    
    return 0;
}