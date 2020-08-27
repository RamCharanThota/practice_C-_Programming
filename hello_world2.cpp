#include <iostream>
class exm{
    int id;
    public :
    void set(int a){
        id =a;

    };
    int get(){
        return id;
    };
};

int main(){
    exm e;
    e.set(20);
    int val = e.get();
    std::cout<< "the value is"<< val << std::endl;
    return 0;

}