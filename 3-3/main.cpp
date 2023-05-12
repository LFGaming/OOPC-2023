#include "hwlib.hpp"
#include <array>

#include "drawable.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "ball.hpp"
#include "wall.hpp"

int main(){
   hwlib::target::window w( hwlib::xy( 128, 64 ), hwlib::white, hwlib::black, 2 );
   wall top( w, hwlib::xy(   0,  3 ), hwlib::xy( 127,  3 ), 4);
   wall right( w, hwlib::xy( 123,  0 ), hwlib::xy( 123, 63 ), 4);
   wall bottom( w, hwlib::xy(   0, 63 ), hwlib::xy( 127, 63 ), 4);
   wall left( w, hwlib::xy(   0,  0 ), hwlib::xy(   0, 63 ), 4);
   ball b( w, hwlib::xy( 50, 20 ), 9, hwlib::xy( 5, 2 ) );
   
   std::array< drawable *, 5 > objects = { &bottom, &right, &left, &top,  &b };

   for(;;){
      w.clear();
      for( const auto &p : objects ){
         p->draw();
      }
      w.flush();
      hwlib::wait_ms( 200 );
      for( const auto &p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

