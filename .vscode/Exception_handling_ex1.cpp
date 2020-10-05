#include<iostream>
using namespace std;//not recommended 

int main(){
    int a,b;
    try{
        cout<<"Enter two numbers : ";
        cin>>a>>b;
        if (b==0){
            throw 0;
        }
        cout<<"Division = :"<<a/b;
    }
    catch(int x){
        cout<<"Division Not possible";
    }
}