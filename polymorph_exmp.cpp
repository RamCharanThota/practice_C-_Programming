#include <iostream>

class Rect {
    protected:
    int height_=0,width_=0;
    public:
    Rect (int h, int w):height_{h},width_{w}{};
    void print(){
        std::cout<< "Rect"<< "  height "<<height_<< " width "<<width_;
    }
};

class Square : public Rect{
    
    public:
     Square(int side):Rect(side,side){};
    void print(){
        std::cout<< "square"<< "  height "<<height_<< " width "<<width_;
    }
};

int main (){
    Square s(20);
    s.print();

    Rect& rec = s;
    rec.print();

    return 0;
}