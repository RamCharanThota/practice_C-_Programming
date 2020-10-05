#include<iostream>

class A{
    public:
    A(){};

    void print(){
        std::cout<<"A is printed";

    }

};

int main(){
    A().print();
}