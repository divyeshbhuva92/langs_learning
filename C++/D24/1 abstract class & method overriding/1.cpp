// Make a class Shape with data member int dimension and member function 
// calculate_Area(). Make this class abstract. Override this method in class 
// circle for calculating area of circle.

#include <iostream>
using namespace std;

class shape{
    public:
    float dimension;

    public:
    void get_dimension(){
        cout << "Enter dimension for circle : ";
        cin >> dimension;
    }
    
    virtual float calculate_Area() = 0;
};

class circle: public shape{
    public:
    float calculate_Area(){
        cout << "Area of circle is " <<  3.14 * dimension * dimension << endl;
    }
};

int main(){
    circle circ;

    circ.get_dimension();
    circ.calculate_Area();

    return 0;
}