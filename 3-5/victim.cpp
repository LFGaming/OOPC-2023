#include "victim.hpp"
victim::victim( hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end ):
	rectangle( w , location , end)
    {
    }

void victim::draw(){
        // hwlib::line x( location, end );
        hwlib::line x( hwlib::xy( location.x,  location.y ), hwlib::xy( end.x,  location.y ) );
        hwlib::line x2( hwlib::xy( location.x,  location.y ), hwlib::xy( location.x,  end.y ) );
        hwlib::line x3( hwlib::xy( end.x,  location.y ), hwlib::xy( end.x,  end.y ) );
        hwlib::line x4( hwlib::xy( location.x,  end.y ), hwlib::xy( end.x,  end.y ) );
        x.draw( w );
        x2.draw( w );
        x3.draw( w );
        x4.draw( w );
}

void victim::update(){
}

void victim::interact( drawable & other ) {
    if( this != & other){
        if( overlaps( other )){
            if (end.x > location.x)
            {
                end.x--;
            }
            if (end.y > location.y)
            {
                end.y--;
            }
            
        }
    }
}  