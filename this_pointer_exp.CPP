# include <iostream>
class Test{
    int a , b;
    public:
    void show(int a,int b){
        this->a=a;
        this->b=b;
        /* exmp 1
        std::cout<<"object address is"<<this;
        std::cout<<"a= "<<this -> a<<std::endl;
        std::cout<<"b= "<<this ->b;*/
        
    }
    void display(){
        std::cout<<"a value is "<<a<<std::endl;
        std::cout<<"b value is "<<b<<std::endl;
        }
};

int main(){
    Test t1;
    t1.show(10,12);
    t1.display();
    
    return 0;
}