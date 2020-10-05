#include<iostream>
#include<string>
int main(){
    std:: string s1="Ram Charan  Teja Thota";
    for (std::string:: iterator ite =s1.begin();ite!=s1.end();ite++){
        std::cout<<*ite<<std::endl;

    }

    return 0;

}