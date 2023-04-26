// example:
// definition of the functions of a rectangle object

#include "circle.hpp"

circle::circle( hwlib::window & w, int start_x, int start_y, int rad ):
   w( w ),
   start_x(start_x),
   start_y(start_y),
   rad(rad)
{}

void circle::print(){
    hwlib::circle circle(
      hwlib::xy( start_x, start_y ),rad);
    circle.draw(w);
   w.flush();
}