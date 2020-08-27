#include <iostream>
#include <cstring>
class emp{
    int emid;
    char ename[40];
    float esal;
    
    public :
    void getemp (int id, char name[40], float basic);
    void printeDet();
};
void emp::getemp(int id, char name[40], float basic){
    emid=id;
    strcpy(ename,name);
    esal=basic;
}
void emp::printeDet(){
    std::cout<<"empolyee id is"<< emid << std::endl;
    std::cout<<"empolyee name is"<< ename << std::endl;
    std::cout<<"empolyee salary is"<< esal << "   ";
}

int main (){
    emp e1;
    e1.getemp(44, "RAM" ,200000);
    e1.printeDet();
    
    return 0;
    
    
    
}