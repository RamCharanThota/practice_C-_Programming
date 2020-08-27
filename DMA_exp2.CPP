#include<iostream>
# include <cstddef>

int main() {
    
    int n;
    int *p;
    std::cout<<"enter the value n ";std::cin>> n;
    p=new int[n];
    /*
    if (p = NULL){
        std::cout<<" invalid return";
        return -1;
        break;
    };*/
    for (int i=0;i<n;i++){
        std::cout<<"en the value of P";std::cin>>p[i];
    };
    for (int i=0;i<n;i++){
        std::cout <<" the entered p values are "<< p[i];
    };
    
    delete [] p;
    return 0;
    
}