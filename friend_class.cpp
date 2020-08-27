#include <iostream> 
class Test1{ // the container class
    int a,b;
    public:
    friend class FriTest1;// contained class
    void set(int a,int b){
        this->a=a;
        this->b=b;
    }
};
class FriTest1{
    public:
    void get(Test1 t){
        std::cout<<"the value of a is"<<t.a<< std::endl;
        std::cout<<"the value of b is"<<t.b<< std::endl;
        
    }
};

int main(){
    Test1 t1;
    t1.set(20,30);
    FriTest1 ft;
    ft.get(t1);
    return 0;
}