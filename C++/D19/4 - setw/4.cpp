// setw = manipulation operator (only for increment width)
// setw is used to set width of the output.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a=3, b=78, c=12334;

    cout<<"value of a without setw : "<< a <<endl;
    cout<<"value of b without setw : "<< b <<endl;
    cout<<"value of c without setw : "<< c <<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"value of a : "<< setw(4) << a <<endl;
    cout<<"value of b : "<< setw(4) << b <<endl;
    cout<<"value of c : "<< setw(4) << c <<endl;

    return 0;
}