//rectangle.cpp

// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"

fillrectangle::fillrectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y ):
   w( w ),
   start_x(start_x),
   start_y(start_y),
   end_x(end_x),
   end_y(end_y)
{}

void fillrectangle::printfilled() {
    for(int i = start_x; i < (end_x + 1) ; i++){
        for(int j = start_y; j < (end_y + 1); j++){
            hwlib::xy x (i,j);
            w.write(x);
        }
    }
    w.flush();

}