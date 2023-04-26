#include "meubels.hpp"

void Stool::removeleg(){
        n_legs -= 1;
    };

void Table::fourlegs(){
        n_legs += 4;
    };

void Furniture::makemorehipster(){
    chair1.removeleg();
    chair2.removeleg();
    chair3.removeleg();
    chair4.removeleg();
    tafel.fourlegs();
};

void Furniture::print(){
    chair1.print();
    chair2.print();
    chair3.print();
    chair4.print();
    tafel.print();        
    }