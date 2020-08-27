#include <iostream>

class Stud{
    // public:
    int id;
    
    public:
    int get (){
        return id;
    }
    public:
    void set(int num){
        id=num;
    }
};

int main (){
    Stud sa;
    Stud sb;
    sa.set(20);
    sb.set(30);
    std::cout<<sa.get()<<"  "<<sb.get();
    return 0;
}