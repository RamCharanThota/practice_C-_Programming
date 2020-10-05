#include<iostream>

class Rect{
    protected :
    int height, width;
    public:
    Rect( int h, int w):height(h),width(w){};
    virtual void print(){
        std::cout<<"rectangele height and width are "<<height<<" "<<width<<std::endl;
    }
};

class Square: public Rect{
    public:
    Square(int side):Rect(side,side){};
    void print(){
        std::cout<<"square height and width are  "<<height<<" "<<width<<std::endl;
    }

};

int main(){

    Rect r(20,20);
    Square s(30);
    Rect * base;

    base =&s;
    base->print();
    
    base =&r;
    base->print();

    

    
}