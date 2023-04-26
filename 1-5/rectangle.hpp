// rectangle.hpp

// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "hwlib.hpp"

class fillrectangle {
private:
   hwlib::window & w;
   int start_x, start_y, end_x, end_y;
public:
   fillrectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y );
   void printfilled();
};

#endif // RECTANGLE_HPP
