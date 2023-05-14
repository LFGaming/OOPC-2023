#ifndef WALL_HPP
#define WALL_HPP

#include <hwlib.hpp>
#include "rectangle.hpp"
#include "drawable.hpp"
#include <vector>

class wall : public rectangle{
private:

    bool filled = true;
    int update_interval;
    int update_count;
    int teller=0;
public:
   wall( hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end, int update_interval, std::vector<int> stuiter );
   void draw();
   void update();
};

#endif //WALL_HPP