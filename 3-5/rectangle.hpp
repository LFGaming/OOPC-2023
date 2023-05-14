#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <hwlib.hpp>
#include "drawable.hpp"


class rectangle : public drawable{
protected:
    hwlib::xy end;


public:
    rectangle(hwlib::window & w, const hwlib::xy start, const hwlib::xy end) :
            drawable( w , start , end-start),
            end(end)
    {}

//    void draw() {
//        hwlib::rectangle r(location,end);
//        r.draw(w);
//    }

};

#endif //RECTANGLE_HPP