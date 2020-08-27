#include <iostream>
class Test{
    static int count;
    public:
    Test(){
        count++;
        std::cout<<"the object "<<count <<" create "<<std::endl;
    }
    ~Test(){
        std::cout<<"the object "<<count <<" destroyed "<<std::endl;
        count--;

    }
};
int Test::count;
int main(){
    Test t1,t2,t3;

}