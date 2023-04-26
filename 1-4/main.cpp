#include "meubels.hpp"

int main(){
    Furniture blub;
    std::cout<<"vooraf"<<"\n";
    blub.print();
    blub.makemorehipster();
    std::cout<<"\n"<<"achteraf:"<<"\n";
    blub.print();
};