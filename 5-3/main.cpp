#include "hwlib.hpp"
#include "anddeco.hpp"

int main(){
    hwlib::target::pin_in button1 = hwlib::target::pin_in(hwlib::target::pins::d2);
    hwlib::target::pin_in button2 = hwlib::target::pin_in(hwlib::target::pins::d3);
    auto combi = anddeco(button1, button2);
    while (true)
    {
    hwlib::cout<<combi.get();
        hwlib::wait_ms(100);
    }
    
}