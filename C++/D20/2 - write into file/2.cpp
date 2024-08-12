// Write a C++ program to create a file & write into file.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream new_file;

    new_file.open("abc.txt", ios::app); // app = append - start writing in file at the end of file.

    if (!new_file){
        cout << "File creation failed" << endl;
    }
    else{
        cout << "File created successfully" << endl;
        new_file << "This is a file created by C++ program" << endl;
        new_file.close();
    }
    
    return 0;
}