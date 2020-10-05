#include <iostream>
class base {
    public:
    virtual void print(){
        std::cout<<"print base class";
    }
};

class der_one: public base {
    public:
    void print(){
        std::cout<<"print der one class";
    }
};
class der_two: public base {
    public:
    void print(){
        std::cout<<"print der two class";
    }
};

int main(){
    std::cout<<"enter the value 1 for base; 2 for der one and 3 for der two";
    int val=0;
    std::cin>> val;
    base *bptr;
    der_one done;
    der_two dtwo;
    base b;

    switch(val){
        case 1:
        bptr=&done ;
        break;
        case 2:
        bptr=&dtwo ;
        break;
        default:
        bptr=&b;
        break;
    }
    bptr->print();



    return 0;
}