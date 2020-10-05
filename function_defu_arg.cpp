#include<iostream>

int Sum (int a=10,int b=20){
    return a+b;
}

int Sum2(int a,int b=300){
    return a+b;
}

int main(){
    std::cout<<Sum()<<std::endl;
    std::cout<<Sum2(20)<<std::endl;
}