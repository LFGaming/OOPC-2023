#ifndef SNEEUWLANDSCHAP_HPP
#define SNEEUWLANDSCHAP_HPP
#include "line.hpp"



#include "hwlib.hpp"

class rectangle {
private:
   hwlib::window & w;
   line left, right, top, bottom;
public:
   rectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y );
   void print();
};

class fillrectangle {
private:
   hwlib::window & w;
   int start_x, start_y, end_x, end_y;
public:
   fillrectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y );
   void printfilled();
};

class circle {
private:
   hwlib::window & w;
   int start_x, start_y, rad;
public:
   circle( hwlib::window & w, int start_x, int start_y, int rad );
   void print();
};

class sneeuwlandschap{
    private:

    public:
    sneeuwlandschap(hwlib::window & w, int a);
};

#endif //SNEEUWLANDSCHAP_HPP