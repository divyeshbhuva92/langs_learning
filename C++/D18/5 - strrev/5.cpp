// Program to get the reverse of the string.

#include <iostream>
#include <string.h>
using namespace std;


int main(){
    char name[25];
    cout << "Enter name : ";
    cin >> name;
    
    strrev(name);
    cout << name << endl;

    return 0;    
}