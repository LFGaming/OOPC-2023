// #include <hwlib.hpp>

// // int main() {
// //     auto button = hwlib::target::pin_in(hwlib::target::pins::d2);
// //     auto button2 = hwlib::target::pin_in(hwlib::target::pins::d3);

// //     auto led0 = hwlib::target::pin_out( hwlib::target::pins::d8);

// //     hwlib::wait_ms(500);

// //     while (true) {
// //         hwlib::cout<<"ONE:   "<<button.read()<<"\n";
// //         hwlib::cout<<"TWO:   "<<button2.read()<<"\n";
// //         if (button.read() == 1)
// //         {
// //             led0.write( 1 ); led0.flush();
// //             // hwlib::wait_ms(1000);
// //         }else
// //         {
// //             hwlib::wait_ms( 80 ); led0.write( 0 ); led0.flush();
// //         }
        
// //         button.refresh();
// //         button2.refresh();
// //         hwlib::wait_ms(100);
// //     }
// // }

// void kitt( hwlib::port_out & leds, int ms = 80 ){
//     auto button = hwlib::target::pin_in(hwlib::target::pins::d2);
//     auto button2 = hwlib::target::pin_in(hwlib::target::pins::d3);

//     hwlib::wait_ms(500);

//     while (true) {
//         hwlib::cout<<"ONE:   "<<button.read()<<"\n";
//         hwlib::cout<<"TWO:   "<<button2.read()<<"\n";
//         if (button.read() == 1)
//         {
//             // led0.write( 1 ); led0.flush();
//             // hwlib::wait_ms(1000);

//             for(;;){
//                 for( unsigned int i = 0; i < leds.number_of_pins(); ++i ){
//                     leds.set( 0x01 << i ); 
//                     hwlib::wait_ms( ms );
//                 }
//                 for( unsigned int i = leds.number_of_pins() - 2; i > 0; --i ){
//                     leds.set( 0x01 << i ); 
//                     hwlib::wait_ms( ms );
//                 }
//             }
//         }else
//         {
//             // hwlib::wait_ms( 80 ); led0.write( 0 ); led0.flush();
//         }
        
//         button.refresh();
//         button2.refresh();
//         hwlib::wait_ms(100);
//     }


// }


// int main( void ){

//     auto led0 = hwlib::target::pin_out( hwlib::target::pins::d7 );
//     auto led1 = hwlib::target::pin_out( hwlib::target::pins::d6 );
//     auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
//     auto led3 = hwlib::target::pin_out( hwlib::target::pins::d4 );
//     auto leds = hwlib::port_out_from_pins( led0, led1, led2, led3 );
//     ::kitt( leds );
// }



// ----------------------------------------
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
            leds.write(0x01);
        }
        if (i == 1)
        {
            leds.write(0x03);
        }
        if (i == 2)
        {
            leds.write(0x07);
        }
        if (i == 3)
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


// #include <hwlib.hpp>

// void kitt(hwlib::port_out &leds, hwlib::pin_in &button1, hwlib::pin_in &button2) {
//     // const int ms = 80;
//     int currentIndex = 0;
//     // bool direction = true; // true for forward, false for backward

//     while (true) {
//         if (button1.read() == 0 && !button2.read()) {
//             hwlib::wait_ms(50); // Debounce delay
//             if (button1.read() == 0 && !button2.read()) {
//                 currentIndex++;
//                 if (currentIndex >= leds.number_of_pins()) {
//                     currentIndex = 0;
//                 }
//                 leds.write(0x01 << currentIndex);
//                 hwlib::wait_ms(200);
//             }
//         }
//         else if (button2.read() == 0 && !button1.read()) {
//             hwlib::wait_ms(50); // Debounce delay
//             if (button2.read() == 0 && !button1.read()) {
//                 currentIndex--;
//                 if (currentIndex < 0) {
//                     currentIndex = leds.number_of_pins() - 1;
//                 }
//                 leds.write(0x01 << currentIndex);
//                 hwlib::wait_ms(200);
//             }
//         }
//     }
// }

// int main() {
//     auto button1 = hwlib::target::pin_in(hwlib::target::pins::d2);
//     auto button2 = hwlib::target::pin_in(hwlib::target::pins::d3);
//     auto led0 = hwlib::target::pin_out(hwlib::target::pins::d8);
//     auto led1 = hwlib::target::pin_out(hwlib::target::pins::d9);
//     auto led2 = hwlib::target::pin_out(hwlib::target::pins::d10);
//     auto led3 = hwlib::target::pin_out(hwlib::target::pins::d11);
//     auto leds = hwlib::port_out_from_pins_t(led0, led1, led2, led3);

//     // Turn off all LEDs initially
//     leds.write(0x00);

//     hwlib::wait_ms(500);
//     kitt(leds, button1, button2);

//     return 0;
// }
