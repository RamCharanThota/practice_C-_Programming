# include <iostream>
class ex{
int id;
public :
void set(int a){
id=a;
};

int get(){
return id;
};

};

int main (){
ex a;
a.set(20);
int val=a.get();
std::cout<< "the value is " << val << " ";
return 0;
}
