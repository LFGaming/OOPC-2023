#include "hwlib.hpp"
#include "pin_out_invert.hpp"

int main(){
    auto led0 = hwlib::target::pin_out(hwlib::target::pins::d2);
    auto led0_inv = invert_pin(led0);
    auto led1 = hwlib::target::pin_out(hwlib::target::pins::d3);
    auto led1_inv = invert_pin(led1);
    auto led2 = hwlib::target::pin_out(hwlib::target::pins::d4);
    auto led2_inv = invert_pin(led2);
    auto led3 = hwlib::target::pin_out(hwlib::target::pins::d5);
    auto led3_inv = invert_pin(led3);
    auto led4 = hwlib::target::pin_out(hwlib::target::pins::d8);
    auto led5 = hwlib::target::pin_out(hwlib::target::pins::d9);
    auto led6 = hwlib::target::pin_out(hwlib::target::pins::d10);
    auto led7 = hwlib::target::pin_out(hwlib::target::pins::d11);

    auto all_leds = hwlib::all(led0_inv, led1_inv, led2_inv, led3_inv, led4, led5, led6, led7);
    hwlib::blink(all_leds);
}
