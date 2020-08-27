#include <iostream>
#include <string.h>
class Test{
   char name[20];
    public:
    void set(){
        std::cout<<" enter the name"<<std::endl;
        std::cin>>name;
    }
    Test operator + (Test t){
        Test t3;
        strcpy(t3.name,t.name);
        strcat(t3.name,"  ");
        strcat(t3.name,name);
        return t3;
        }
        void show(){
            std::cout<<name;
        }
};

int main(){
    
    Test t1,t2,t3;
    t1.set();
    t2.set();
    t3=t1+t2;
    t3.show();
}
