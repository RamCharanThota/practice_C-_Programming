#include <iostream>
class A{
    public:
    A(){
        std::cout<<"A class is initiated"<<std::endl;
    }
    virtual ~A(){
        std::cout<<"A class is destructed"<<std::endl;
    }
};

class B : public A{
    public:
    B(){
       std::cout<<"B class is initiated"<<std::endl;
    }
      ~B(){
        std::cout<<"B class is destructed"<<std::endl;
    }
};

class C: public B{
    public:
    C(){
       std::cout<<"C class is initiated"<<std::endl;
    }
    ~C(){
        std::cout<<"C class is destructed"<<std::endl;
    }
};

int main(){
    A* Aptr;
    Aptr= new C;
    delete Aptr;
    return 0;
}
