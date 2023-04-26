#ifndef MEUBELS_HPP
#define MEUBELS_HPP
#include <iostream>
 
class Stool {
private:
    int n_legs;
    int n_seats;
public:
    Stool(const int& n_legs, const int& n_seats) :
        n_legs(n_legs), n_seats(n_seats){
    }
    void removeleg();
    void print(){
        std::cout<<"aantal poten: "<<n_legs<<" aantal seats: "<<n_seats<<std::endl; 
    };
};

class Table {
private:
    int n_legs;
    int length;
    int width;
public:
    Table(const int& n_legs, const int& length, const int& width) :
        n_legs(n_legs), length(length), width(width){
    }
    void fourlegs();
        void print(){
    std::cout<<"aantal poten: "<<n_legs<<" length: "<<length<<" width: "<<width<<std::endl;
    };
};

class Furniture {
private:
    Stool chair1;
    Stool chair2;
    Stool chair3;
    Stool chair4;
    Table tafel;
public:
    Furniture() :
        chair1(Stool(4,1)),
        chair2(Stool(5,2)),
        chair3(Stool(1,3)),
        chair4(Stool(3,4)),
        tafel(Table(3, 10, 20)){
    }
    void makemorehipster();

    void print();
};

#endif // BOOK_HPP