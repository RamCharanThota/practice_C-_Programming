#include <iostream>
#include <stdlib.h>
class Test{
    static int a;

    public :
    void set (int score ){
        this-> a=score;
    }

    int get(){
        return a;
    }

};
int Test::a;

int main (){
    Test t1,t2;
    t1.set(50);
    t2.set(100);
    std::cout<< "the value of a is "<< t1.get()<<std::endl;
    std::cout<< "the value of a is "<< t2.get()<<std::endl;

    //clc;

return 0;
    
}