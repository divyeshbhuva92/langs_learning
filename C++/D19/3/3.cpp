//

#include <iostream>

class x{
 public: x(){
    std::cout<<"X";
 }
 ~x(){
    std::cout<<"~X";
 }
};
class y: public x{
 public: y(){
    std::cout<<"y";
 }
 ~y(){
    std::cout<<"~y";
 }
};

int main(){
    y obj;
    return 0;
}