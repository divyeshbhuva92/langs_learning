// Write a program that use default arguments in a function for calculating volume of cuboid.
// All dimensions width, height, depth should be default to 1 unit.

#include <iostream>
using namespace std;


int volume_cuboid(int w = 1, int h = 1, int d = 1){
    return (w*h*d);
}

int main(){
    int vol, vol1;
    vol = volume_cuboid(2, 3);
    vol1 = volume_cuboid();

    cout<<"Volume of cuboid is "<< vol << endl;
    cout<<"Volume of cuboid1 is "<< vol1 << endl;
    return 0;
}


