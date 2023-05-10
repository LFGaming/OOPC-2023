#ifndef WALL_HPP
#define WALL_HPP

#include <hwlib.hpp>
#include "line.hpp"

class wall : public line{
private:
//    hwlib::window & w;
//    line left, right, top, bottom;

    bool filled;
    int update_interval;
    int update_count;
public:
   wall( hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end, int update_interval );
   void draw();
   void update();
};

#endif //WALL_HPP