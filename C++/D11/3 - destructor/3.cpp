// Desrtructor

#include <iostream>
using namespace std;

class student
{
 public:
 student() {  // constructor
    cout<< "find";
 }

 ~student() {  // destructor
    cout<< "course";
 }
};

int main() {
 student obj;
 return 0;
}

