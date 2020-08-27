#include <iostream>

int sum (int x=0,int y=0,int z=0);

int  main(){
    std::cout<<" sum is "<< sum(20,30,40)<<std::endl;
    std::cout<<" sum is "<< sum(20,30)<<std::endl;
    std::cout<<" sum is "<< sum(20)<<std::endl;
    std::cout<<" sum is "<< sum()<<std::endl;
    return 0;
}

int sum (int x,int y,int z){
    return x+y+z;
}