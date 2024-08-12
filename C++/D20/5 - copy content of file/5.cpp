// Write a program to copy contents of gtu.txt into su.txt

#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main(){
    fstream newFile1, newFile2;
    char ch;

    newFile1.open("gtu.txt", ios::in);
    newFile2.open("su.txt", ios::out);

    if(newFile1){
        while(1){
            newFile1 >> ch;

            if(isspace(ch)){
                cout << "there is space here." << endl;
            }
            else {
                cout << "copying..." << ch << endl;
            }

            if(newFile1.eof()) 
            break;

            newFile2 << ch;
        }
    }
    else{
        cout << "File does not exist" << endl;
    }

    newFile1.close();
    newFile2.close();

    return 0;
}