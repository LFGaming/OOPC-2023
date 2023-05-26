#ifndef PIN_OUT_INVERT_HPP
#define PIN_OUT_INVERT_HPP

#include "hwlib.hpp"

class invert_pin : public hwlib::pin_out {
    private:
    hwlib::pin_out & pin1;
    public:
    invert_pin(hwlib::pin_out & pin1):
    pin1(pin1)
    {}
    void write(bool x){
        pin1.write(!x);
    }
    void flush(){
        pin1.flush();
    }
};

#endif // PIN_OUT_INVERT_HPP