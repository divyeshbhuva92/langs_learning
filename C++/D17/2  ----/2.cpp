// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;

class A1
{
public:
  A1()
  {
    cout << "Constructor of the base class A1 \n";
  }
};

class A2
{
public:
  A2()
  {
    cout << "Constructor of the base class A2 \n";
  }
};

class S : public A1, public A2
{
public:
  S()
  {
    cout << "Constructor of the derived class S \n";
  }
};

// Driver code

int main()
{
  S obj;
  return 0;
}