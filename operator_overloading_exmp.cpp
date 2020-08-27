#include <iostream>
#include <stdlib.h>
class Test{
    int a;
    public:
    void set(){
        std::cout<<" enter the value"<<std::endl;
        std::cin>>a;
    }
    void operator == (Test t){
        if (a == t.a){
            std::cout << "both are equal";

        } else {
            std::cout << " both are not equal";
            }
    }
};

int main(){
    system("CLS");
    Test t1,t2;
    t1.set();
    t2.set();
    t1==t2;
    return 0;
}
