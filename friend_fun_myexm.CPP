#include<iostream>

class Blue;

class Red {
    int redVal;
    friend int frendu (Red,Blue);
    public:
    void set(){
        redVal=20;
    }
    
};
class Blue{
    int bluVal;
    friend int frendu(Red,Blue);
    public:
    void set(){
        bluVal=40;
    }
    
};

int frendu(Red r,Blue b){
    int sum = r.redVal+b.bluVal;
    return sum;
    
}


int main (){
    Red r;
    Blue b;
    r.set();
    b.set();
    int total=frendu(r,b);
    std::cout<< " the total value of the sum is"<< total<<"    ";
    return 0;
    
}