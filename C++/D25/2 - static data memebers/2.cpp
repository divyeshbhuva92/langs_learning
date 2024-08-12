// static data members...

#include <iostream>
using namespace std;

class item{
    static int count;
    
    public:
    void get_data(){
        count++;
    }
    void getcount(){
        cout << "count is" << count << endl;
    }
};

int item::count = 10;

int main(){
    item a,b;
    a.getcount();
    b.getcount();
    
    a.get_data();
    b.get_data();

    cout << "------------------" << endl;

    a.get_data();
    b.get_data();
    return 0;
}