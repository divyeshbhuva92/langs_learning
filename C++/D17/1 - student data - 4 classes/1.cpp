// Create four class student (student_id, name), theory_marks (theory marks), practical_marks (practical marks) and result (total, average). Here, theory_marks and practical_marks classes are derived from the student class and the result class is derived from the class theory_marks and practical_marks. Write a C++ program using necessary member functions to read and display the result of 3 students.

#include <iostream>
#include <string>
using namespace std;

class Student{
    protected:
    int student_id;
    string name;

    public:
    Student(int id, const string &n) : student_id(id), name(n) {}

    void display()
    {
        cout << "Student ID: " << student_id << endl;
        cout << "Name: " << name << endl;
    }
};

class TheoryMarks : public Student{
    protected:
    int theory_marks;

    public:
    TheoryMarks(int id, const string &n, int t_marks) : Student(id, n), theory_marks(t_marks) {}

    void display()
    {
        Student::display();
        cout << "Theory Marks: " << theory_marks << endl;
    }
};

class PracticalMarks : public Student{
    protected:
    int practical_marks;

    public:
    PracticalMarks(int id, const string &n, int p_marks) : Student(id, n), practical_marks(p_marks) {}

    void display()
    {
        Student::display();
        cout << "Practical Marks: " << practical_marks << endl;
    }
};

class Result : public TheoryMarks, public PracticalMarks{
    public:
    Result(int id, const string &n, int t_marks, int p_marks) : TheoryMarks(id, n, t_marks), PracticalMarks(id, n, p_marks) {}

    void display()
    {
        TheoryMarks::display();
        PracticalMarks::display();
        cout << "Total Marks: " << theory_marks + practical_marks << endl;
        cout << "Average Marks: " << (theory_marks + practical_marks) / 2.0 << endl;
    }
};

int main(){
    Result student1(1, "sam", 80, 90);
    Result student2(2, "adi", 75, 85);
    Result student3(3, "hunaif", 85, 95);

    cout << "Result for Student 1:" << endl;
    student1.display();
    cout << endl;

    cout << "Result for Student 2:" << endl;
    student2.display();
    cout << endl;

    cout << "Result for Student 3:" << endl;
    student3.display();
    cout << endl;

    return 0;
}