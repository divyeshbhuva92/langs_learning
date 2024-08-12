// Develop a C++ program that creates a new file,
// write “Computer Engineering” message in that file and display contents of that file on the screen.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream newFile;

    newFile.open("fields.txt", ios::out);

    if(!newFile){
        cout << "File creation failed" << endl;
    }
    else{
        cout << "File created successfully" << endl;
        newFile << "Computer Engineering" << endl;
        newFile.close();
    }

    newFile.open("fields.txt", ios::in);
    if(newFile){
        char ch;
        while(1){
            newFile >> ch;

            if (newFile.eof()) // eof = end of file
            break;

            cout << ch << endl;
        }
    }
    else{
        cout << "File not found" << endl;
    }
    newFile.close();
    return 0;
}