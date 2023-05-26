#ifndef ANDDECO_HPP
#define ANDDECO_HPP

#include "hwlib.hpp"

class anddeco : public hwlib::pin_in {
    private:
    hwlib::pin_in & pin1;
    hwlib::pin_in & pin2;
    public:
    anddeco(hwlib::pin_in & pin1, hwlib::pin_in & pin2):
    pin1(pin1),
    pin2(pin2)
    {}
    bool read() override {
        // virutal bool read()=0
        // dus deze functie blijft leeg
        return 0;
    }
    bool get(){
        if (pin1.read()&& pin2.read())
        {
            return 1;
        }else
        {
            return 0;
        }
              
    }
};

#endif // ANDDECO_HPP