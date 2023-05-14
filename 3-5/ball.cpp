#include "ball.hpp"

ball::ball( 
    hwlib::window & w, 
    const hwlib::xy & midpoint, 
    int radius, 
    const hwlib::xy & speed 
	):
		circle( w, midpoint, radius ),
		speed( speed )  
    {}
   
void ball::update(){
      location = location + speed; 
	}
   
void ball::interact( drawable & other ) {
    if( this != & other){
        if( overlaps( other )){
			speed.x *= other.stuiter[0];
			speed.y *= other.stuiter[1];
        }
    }
}  