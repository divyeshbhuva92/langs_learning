// Write a C++ program to get percentage from marks for 4 subjects. & print grade according as per percentage.
// above 70 = distinction, 60 to 69 = first class, 50 to 59 = second class, 35 to 49 = pass, below 35 = fail.

#include <iostream>
using namespace std;

int main(){
    int sub1, sub2, sub3, sub4, per;

    cout << "Enter values:" << endl;
    cin>>sub1>>sub2>>sub3>>sub4;
    
    per = (sub1+sub2+sub3+sub4)/4;
    cout << "Percentage is : " << per << endl;

    if(sub1 >= 35 && sub2 >= 35 && sub3 >= 35 && sub4 >= 35)
    {
        if(per >= 70){
            cout<<"Grade : Distinction"<<endl;
        }
        else if(per >= 60 && per < 70){
            cout<<"Grade : First class"<<endl;
        }
        else if(per >= 50 && per < 60){
            cout<<"Grade : Second class"<<endl;
        }
        else{
            cout<<"Grade : Pass"<<endl;
        }
    }
    else{
        cout<<"Grade : Fail"<<endl;
    }
    return 0;
}