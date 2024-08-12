// structure & string copy function.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    struct student{     // structure
        int num;
        char name[25];
    };

    student stu;
    stu.num = 123;

    strcpy(stu.name, "raj");    // copy string

    cout << stu.num << endl;
    cout << stu.name << endl;
    return 0;
}