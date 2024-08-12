// program to understand different types of access specifiers in class.

#include <iostream>
using namespace std;

class gtu
{
private:
    int x;

public:
    int y;
};

int main()
{
    gtu obj;
    // obj.x = 10;
    obj.y = 11;
    cout << obj.y << endl;
    return 0;
}

// practice :::::
// int Add(int x, int y, int z){
//     return (x+y);
// };
// double Add(double x, double y, double z){
//     return (x+y);
// };

// int main() {
//     cout<<Add(5,6,0)<<endl;
//     cout<<Add(5.5,6.6,0.0)<<endl;
//     return 0;
// }