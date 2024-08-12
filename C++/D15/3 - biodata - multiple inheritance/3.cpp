// Design 2 base classes 
// "Personal"(name, id, Birthdate)
// "Academic"(10th Marks, 12th marks)
// Derive a class "biodata" from both these classes. & display the data.

#include <iostream>
using namespace std;

class Personal{
    public:
    string name, birthdate;
    int id;
    void getPersonalDetails(){
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter B.O.D.: ";
        cin >> birthdate;
    }
};

class Academic{
    public:
    int sscMarks, hscMarks;
    void getMarks(){
        cout << "Enter ssc marks : ";
        cin >> sscMarks;
        cout << "Enter hsc marks : ";
        cin >> hscMarks;
    }
};

class Biodata: public Personal, public Academic{
  public:
  void ShowBio(){
    cout << "ID : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "B.O.D. : " << birthdate << endl;
    cout << "SSC Marks : " << sscMarks << endl;
    cout << "HSC Marks : " << hscMarks << endl;
  }  
};

int main(){
    Biodata obj;
    obj.getPersonalDetails();
    obj.getMarks();
    cout << "---------------BIODATA------------------" << endl;
    obj.ShowBio();
    return 0;
}
