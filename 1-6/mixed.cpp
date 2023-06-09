#include "mixed.hpp"

guy::guy(hwlib::window & w, int lb_x, int b_start_y, int rb_x, int b_end_y, int ra_start_x, int a_start_y, int ra_end_x,
int a_end_y, int la_start_x, int la_end_x, int head_start_x, int head_start_y, int radius, int s_start_x, int s_start_y,
int s_end_x, int s_end_y):
w(w), line_left_leg(w, lb_x, b_start_y, lb_x, b_end_y), line_right_leg(w, rb_x, b_start_y, rb_x, b_end_y),
line_right_arm(w, ra_start_x, a_start_y, ra_end_x, a_end_y), line_left_arm(w, la_start_x, a_start_y, la_end_x, a_end_y),
body(w, s_start_x, s_start_y, s_end_x, s_end_y), head(w, head_start_x, head_start_y, radius){}

void guy::print(){
    body.printfilled();
    line_left_arm.print();
    line_left_leg.print();
    line_right_leg.print();
    line_right_arm.print();
    head.print();
}