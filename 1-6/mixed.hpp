#ifndef MIXED_HPP
#define MIXED_HPP

#include "hwlib.hpp"
#include "rectangle.hpp"
#include "line.hpp"
#include "circle.hpp"

class guy{
    private:
    hwlib::window & w;
    line line_left_leg;
    line line_right_leg;
    line line_right_arm;
    line line_left_arm;
    fillrectangle body;
    // filled_rectangle body;
    circle head;
    public:
    guy(hwlib::window & w, int lb_x, int b_start_y, int rb_x, int b_end_y, int ra_start_x, int a_start_y, int ra_end_x,
    int a_end_y, int la_start_x, int la_end_x, int head_start_x, int head_start_y, int radius, int s_start_x, int s_start_y,
    int s_end_x, int s_end_y);
    void print();
};

#endif