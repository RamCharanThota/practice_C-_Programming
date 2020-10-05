#include <iostream>

struct Players {
    static int count;
    
    Players(){
        Players::count=Players::count+1;
        }
    
    ~Players(){
            Players::count=Players::count-1;
            std::cout<<"Total number of players of in the team "<< Players::count<<std::endl;

    }

};
int Players::count=0;

int main(){
    Players p1;
    Players p2;
    std::cout<<"Total number of players of in the team "<< Players::count<<std::endl;

     

}