# include <iostream>
# include <iomanip>
//# include <stdio.h>

int main (){
    //clrscr();
    std::cout<<std::setw(5)<<"10"<<std::endl;
    std::cout<<std::setw(5)<<"323"<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<std::setw(5)<<"4323";
    std::cout<<std::setw(5)<<"433"<<std::endl;
    //getch();
    
    std::cout<<22/7.0 <<"\n";
    std::cout<<std::setprecision(3);
    std::cout<<22/7.0<< std::endl;
    
    std::cout<<std::setw(10)<<std::setiosflags(std::ios::left)<<"Charan"<<std::endl;
    
    //std::cout<<std::setiosflags(std::ios::showpos)<<100;
    std::cout<<std::setiosflags(std::ios::scientific)<<455.4567<<std::endl;
    std::cout<<std::setiosflags(std::ios::fixed)<<4.55e+2;
    
    
    return 0;
}

