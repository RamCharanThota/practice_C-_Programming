#include <iostream>
int* readMarks(int n);

int main(){
    int numStud;
    int* qmarks;
    std::cout<<" total students"<< std::endl;
    std::cin>> numStud;
    std::cout<< "enter the quiz marks of student"<< std::endl;
    qmarks = readMarks(numStud);
    
    delete[] qmarks:
    
    return 0;
    
}

int* readMarks(int n){ 
int* marks, i;
marks = new int[n];
if(marks==null){return null};
for(i=0;i<n;i++){
        std::cin>>marks[i];
    }
 return marks
}

