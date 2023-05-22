#include <hwlib.hpp>

void kitt(hwlib::port_out &leds, hwlib::pin_in &button, hwlib::pin_in &button2) {
    int i = 0;

    while (true) {
        if (button2.read() == 1) {
            button2.refresh();
            i++;
        }
        else if (button.read() == 1){
            button.refresh();
            i--;
        }
        if (i == 0)
        {
            leds.write(0);
        }
        if (i == 1)
        {
            leds.write(0x01);
        }
        if (i == 2)
        {
            leds.write(0x03);
        }
        if (i == 3)
        {
            leds.write(0x07);
        }
        if (i == 4)
        {
            leds.write(0x0F);
        }
        hwlib::wait_ms(200);
    }
}

int main() {
    auto button = hwlib::target::pin_in(hwlib::target::pins::d2);
    auto button2 = hwlib::target::pin_in(hwlib::target::pins::d4);
    auto led0 = hwlib::target::pin_out(hwlib::target::pins::d8);
    auto led1 = hwlib::target::pin_out(hwlib::target::pins::d9);
    auto led2 = hwlib::target::pin_out(hwlib::target::pins::d10);
    auto led3 = hwlib::target::pin_out(hwlib::target::pins::d11);
    auto leds = hwlib::port_out_from_pins_t(led0, led1, led2, led3);

    hwlib::wait_ms(500);
    kitt(leds, button, button2);

    return 0;
}