// Write a program to copy contents of gtu.txt into su.txt

#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main(){
    fstream newFile1, newFile2;
    string line;

    newFile1.open("gtu.txt", ios::in);
    newFile2.open("su.txt", ios::out);

    if(newFile1){
        while(getline(newFile1, line)){    // getline function read whole line.
            newFile2 << line << "\n";
        }
    }
    else{
        cout << "File does not exist" << endl;
    }

    newFile1.close();
    newFile2.close();

    return 0;
}