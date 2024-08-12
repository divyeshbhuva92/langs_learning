// write a C++ program for file creation.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream new_file;

    new_file.open("gtu.txt", ios::out);  // out - start writing in file from the start / overwrite in file.  in- for read, out - for write.

    if (!new_file){
        cout << "File creation failed" << endl;
    }
    else{
        cout << "File created successfully" << endl;
        new_file.close();
    }

    return 0;
}