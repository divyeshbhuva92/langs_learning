// write a c++ program to make class of student with data mambers name, marks of c & marks of java.
// use member function read_data for reading data, calculate_data for calculate avg &
// display_data for displaying data for three students.

#include <iostream>
#include <string.h>
using namespace std;

class student{
    public:
    char name[10];
    int marks_C, marks_java;
    float avg_marks;

    public:
    void read_data(){
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks in C: ";
        cin >> marks_C;

        cout << "Enter marks in Java: ";
        cin >> marks_java;
    }
    void calculate_data(){
        avg_marks = (marks_C + marks_java) / 2.0;
    }
    void display_data(){
        cout <<"Name : "<< name << endl;
        cout <<"marks of C language : "<< marks_C << endl;
        cout <<"Marks of Java : "<< marks_java << endl;
        cout <<"Average marks : "<< avg_marks << endl;
    }
};

int main(){
    int i;
    student stu[3];
    for (i = 0; i < 3; i++)
    {
        stu[i].read_data();
        stu[i].calculate_data();
    }
    for (i = 0; i < 3; i++)
    {
        cout << "---------------------------" << endl;
        stu[i].display_data();
        cout << "---------------------------" << endl;
    }
    
}