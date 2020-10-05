#include <iostream>
class A{
    public:
    void print_hello(){
        std::cout<<"helllllooo";
    }
};

int main(){
    A::print_hello();
}