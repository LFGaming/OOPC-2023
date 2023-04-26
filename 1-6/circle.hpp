// example:
// declaration of a rectangle object that is contains four line objects

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "line.hpp"

class circle {
private:
   hwlib::window & w;
   int start_x, start_y, rad;
public:
   circle( hwlib::window & w, int start_x, int start_y, int rad );
   void print();
};

#endif // RECTANGLE_HPP
