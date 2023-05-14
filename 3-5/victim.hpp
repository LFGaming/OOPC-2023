#ifndef VICTIM_HPP
#define VICTIM_HPP


#include <hwlib.hpp>
#include "drawable.hpp"
#include "rectangle.hpp"

class victim : public rectangle{
private:


public:
   victim( hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end );
   void draw();
   void update();
   void interact( drawable & other ) override;
};

#endif //VICTIM_HPP