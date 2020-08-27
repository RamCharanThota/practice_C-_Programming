#include <iostream>

int main (){
    int a =10;
    float b;
    char c;
    // address of operator &
    int* Pa = &a;
    float* Pb = &b;
    char* Pc = &c;
    std::cout << "the adress of a b and c "<<std::endl;
    std::cout<< Pa <<" " << Pb <<" space  "<< Pc << "  ";
    
    // content of operator *
    
    std::cout<< "The value of the ineger a is "<< * Pa <<" ";
    
    return 0;
    
    
}