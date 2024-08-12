// Program to read from file.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream new_file;

    new_file.open("gtu.txt", ios::in);

    if (!new_file){
        cout << "File not found" << endl;
    }
    else{
        char ch;
        while(1){
            new_file >> ch;

            if (new_file.eof()) // eof = end of file
            break;

            cout << ch << endl;
        }
    }

    new_file.close();

    return 0;
}