// abstract class..... 

#include <iostream>
using namespace std;

class shape{
    public:
    float dimension;

    public:
    void getdimension(){
        cin >> dimension;
    }

    virtual float area() = 0;
};

class square: public shape{
    public:
    float area(){
        return dimension * dimension;
    }
};

class circle: public shape{
    public:
    float area(){
        return 3.14 * dimension * dimension;
    }
};

int main(){
    square s;
    circle c;

    cout << "Enter dimention for square : ";
    s.getdimension();

    cout << "Area of square is " << s.area() << endl;

    cout << "Enter dimension for circle : ";
    c.getdimension();

    cout << "Area of circle is " << c.area() << endl;

    return 0;
}