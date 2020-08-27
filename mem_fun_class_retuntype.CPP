# include <iostream>
class Test{
    int a , b;
    public:
    void setter(int a,int b){
    this->a=a;
    this->b=b;
        
    }
    void display(){
        std::cout<<"a value is "<<a<<std::endl;
        std::cout<<"b value is "<<b<<std::endl;
    }
    Test sum (Test t);
};

Test Test::sum (Test t){
    Test t3;
    t3.a=a+t.a
    t3.b=b+t.b;
    return t3;
}

int main(){
    Test t1,t2,t3;
    t1.setter(10,12);
    t2.setter(20,18);
    t3=t1.sum(t2);
    t3.display();
    
    return 0;
}