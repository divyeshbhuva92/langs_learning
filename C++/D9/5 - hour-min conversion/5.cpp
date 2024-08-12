// Write a c++ main function to create objects of hrs class then input two time &
// output the sum.

#include <iostream>
using namespace std;

class hrs
{
    int hours, minutes;

public:
    void set(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void sum(hrs o1, hrs o2)
    { // copy constructor
        minutes = o1.minutes + o2.minutes;

        // minutes to hour conversion
        hours = minutes / 60;
        minutes = minutes % 60;
        hours = o1.hours + o2.hours + hours;
    }

    void display()
    {
        cout << "Total hourss : " << hours << " & minutes : " << minutes << endl;
    }
};

int main()
{
    hrs d1, d2, d3;
    d1.set(5, 30);
    d2.set(3, 60);
    d3.sum(d1, d2);
    d1.display();
    d2.display();
    d3.display();
}