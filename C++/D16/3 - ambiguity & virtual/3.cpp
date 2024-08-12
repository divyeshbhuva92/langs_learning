// to understand ambiguity & virtual keyword.

#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "You are in exam room \n";
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public virtual B, public virtual C
{
};

int main()
{
    D obj;
    obj.B::show();

    return 0;
}

// class B & class C are derived from class A.
// class D is derived from class B & class C.
// class D has 2 base classes. so to avoid ambiguity, "virtual" base class is used by writing "virtual" before or after public.