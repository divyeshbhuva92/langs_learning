// write a C++ program to create a file with following pattern in it.
// * * *
// * *
// *

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int i,j;
    fstream new_file;

    new_file.open("pattern2.txt", ios::out);  

    if (!new_file){
        cout << "File creation failed" << endl;
    }
    else{
        
        for(i = 3; i >= 1; i--)
        {
            for(j = 1; j <= i; j++)
            {
                new_file << "* ";
            }     
            new_file << endl;
        }
        
        cout << "File created successfully" << endl;
        new_file.close();
    }

    return 0;
}