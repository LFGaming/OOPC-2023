#include <hwlib.hpp>
namespace target = hwlib::target;

void kitt(hwlib::port_out &leds, hwlib::pin_in &button, hwlib::pin_in &button2) {
    auto direct_port = direct( leds );

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
        hwlib::cout<<i;
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
        if (i == 5)
        {
            leds.write( 0x1F); 
        }
        if (i == 6)
        {
            leds.write( 0x3F); 
        }
        if (i == 7)
        {
            leds.write( 0x7F); 
        }
        if (i == 8)
        {
            leds.write( 0xFF); 
        }
        leds.flush();
        
        hwlib::wait_ms(200);
    }
}

int main() {
    namespace target = hwlib::target;
    auto button = hwlib::target::pin_in(hwlib::target::pins::d2);
    auto button2 = hwlib::target::pin_in(hwlib::target::pins::d3);
    auto ds   = target::pin_out( target::pins::d12 );
    auto shcp = target::pin_out( target::pins::d13 );
    auto stcp = target::pin_out( target::pins::d10 );
    auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( 
        shcp, 
        ds, 
        hwlib::pin_in_dummy 
    );
    auto hc595 = hwlib::hc595( spi, stcp );

    auto led0 = target::pin_out( target::pins::d4 );
    auto led1 = target::pin_out( target::pins::d5 );
    auto led2 = target::pin_out( target::pins::d6 );
    auto led3 = target::pin_out( target::pins::d7 );

    auto leds = hwlib::port_out_from( 
        led0, 
        led1, 
        led2, 
        led3,
        hc595.p0, 
        hc595.p1, 
        hc595.p2, 
        hc595.p3
        
    );
    leds.flush();
    kitt( leds, button, button2 );    
}