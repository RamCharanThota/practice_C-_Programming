#include<iostream>
#include<string>
int main(){
    std::cout<<"enter your name :";
    std::string sin;
    std::cin>> sin;
    std::cout<<" your name :"<< sin <<std::endl;

    std::cout<<"enter your nickname :";
    std::string sNickin;
    std::getline(std::cin,sNickin);
    std::cout<<" nick name :"<< sNickin <<std::endl;
    

}