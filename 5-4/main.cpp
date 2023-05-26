#include "hwlib.hpp"

int main(){
    auto led0 = hwlib::target::pin_out(hwlib::target::pins::d2);
    auto led1 = hwlib::target::pin_out(hwlib::target::pins::d3);
    auto led2 = hwlib::target::pin_out(hwlib::target::pins::d4);
    auto led3 = hwlib::target::pin_out(hwlib::target::pins::d5);
    auto led4 = hwlib::target::pin_out(hwlib::target::pins::d8);
    auto led5 = hwlib::target::pin_out(hwlib::target::pins::d9);
    auto led6 = hwlib::target::pin_out(hwlib::target::pins::d10);
    auto led7 = hwlib::target::pin_out(hwlib::target::pins::d11);


    auto combi1 = hwlib::all(led0, led1, led2, led3);
    auto combi2 = hwlib::all(led4, led5, led6, led7);
    auto leds = hwlib::port_out_from(combi1, combi2);
    hwlib::kitt(leds);
}