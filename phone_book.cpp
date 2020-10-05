#include<iostream>
#include<string>
#include<fstream>
class contact{
    char name[20];
    int number;

    public:
    void set(){
        std::cout<< "Enter the name :";
        std::cin >> name;
        std::cout<< "Enter the number :";
        std::cin >> number;
        std::cout<< "contact name is :"<<  name <<std::endl<< "number is :"<<number;
    }
};

int main(){

    contact c;
    std::ofstream file;
    file.open("input_file.txt");
    char op;
    do{
        c.set();
        file.write((char*)&c,sizeof(c));
        std::cout<<"do you want to continue :(y/n)";
        std::cin>>op;
    }while(op=='y');
file .close();
    

}