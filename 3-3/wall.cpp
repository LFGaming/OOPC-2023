#include "wall.hpp"

wall::wall( hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end, int update_interval ):
    line( w, location, end )
	{}
   
void wall::draw(){
    hwlib::line x( location, end );
    hwlib::line x2( hwlib::xy( location.x,  location.y -5 ), hwlib::xy( end.x,  end.y -5 ) );
    hwlib::line x3( location, end );
    hwlib::line x4( location, end );
    x.draw( w );;
    x2.draw( w );;
    x3.draw( w );;
    x4.draw( w );;
}

void wall::update(){
    // std::cout<<"update";
// teller++
// if teller % update_interval = 0
// then filled != filled
}