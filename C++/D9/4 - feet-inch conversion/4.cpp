// Write a c++ main function to create objects of
// dist class then input two distances and output 
// the sum.

#include <iostream>
using namespace std;

class dist
{
    int feet, inch;

    public:
    void set(int f, int i)
    {
        feet = f;
        inch = i;
    }

    void sum(dist o1, dist o2)
    { // copy constructor
        inch = o1.inch + o2.inch;

        // inch to feet conversion
        feet = inch / 12;
        inch = inch % 12;
        feet = o1.feet + o2.feet + feet;
    }

    void display()
    {
        cout << "Total feet is : " << feet << " & inch is : " << inch << endl;
    }
};

int main()
{
    dist d1, d2, d3;
    d1.set(5, 10);
    d2.set(6, 12);
    d3.sum(d1, d2);
    d1.display();
    d2.display();
    d3.display();
}