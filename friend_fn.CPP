#include<iostream>

class test{
    int id;
    public:
    test():id(20){};
    void set (int id){
        this->id=this->id+id;
    }
    void disp(){
        std::cout<< " the value of the id is "<< this->id;
    }
};
int main(){
    test t;
    t.set(40);
    t.disp();
    return 0;
}
