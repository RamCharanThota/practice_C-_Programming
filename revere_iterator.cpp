#include<iostream>
#include<string>
int main(){
    std:: string s1="Ram Charan  Teja Thota";
    for (std::string:: reverse_iterator ite =s1.rbegin();ite!=s1.rend();ite++){
        std::cout<<*ite<<std::endl;

    }

    return 0;

}