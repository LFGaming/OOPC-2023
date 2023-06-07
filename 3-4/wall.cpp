#include "wall.hpp"
#include <vector>
wall::wall( hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end, int update_interval, std::vector<int> stuiter ):
	rectangle( w , location , end, stuiter)
    {
        update_interval = update_interval;
    }

void wall::draw(){
    bool horizontal = true;
    if (location.x== end.x)
    {
        horizontal = false;
    }

    if (horizontal)
    {
        hwlib::line x( location, end );
        hwlib::line x2( hwlib::xy( location.x,  location.y -3 ), hwlib::xy( end.x,  end.y -3 ) );
        x.draw( w );;
        x2.draw( w );;
        if(filled) {
            hwlib::line x3( hwlib::xy( location.x,  location.y -2 ), hwlib::xy( end.x,  end.y -2 ) );
            hwlib::line x4( hwlib::xy( location.x,  location.y -1 ), hwlib::xy( end.x,  end.y -1 ) );
            x3.draw( w );
            x4.draw( w );
        }
    }else
    {
        hwlib::line x( location, end );
        hwlib::line x2( hwlib::xy( location.x +3,  location.y ), hwlib::xy( end.x +3,  end.y ) );
        x.draw( w );;
        x2.draw( w );;
        if(filled) {
            hwlib::line x3( hwlib::xy( location.x +2,  location.y ), hwlib::xy( end.x +2,  end.y ) );
            hwlib::line x4( hwlib::xy( location.x +1,  location.y ), hwlib::xy( end.x +1,  end.y ) );
            x3.draw( w );
            x4.draw( w );
        }
    }
}

void wall::update(){
  
    teller++;
    if((teller % update_interval)==0){
        filled = !filled;
    }
   

}