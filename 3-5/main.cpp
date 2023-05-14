#include "hwlib.hpp"
#include <array>

#include "drawable.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "ball.hpp"
#include "wall.hpp"
#include "victim.hpp"

#include <vector>

int main(){
   std::vector<int> bounceH = {1,-1};
   std::vector<int> bounceV = {-1,1};


   hwlib::target::window w( hwlib::xy( 128, 64 ), hwlib::white, hwlib::black, 2 );
   wall top( w, hwlib::xy(   0,  3 ), hwlib::xy( 127,  3 ), 4, bounceH);
   wall right( w, hwlib::xy( 123,  0 ), hwlib::xy( 123, 63 ), 4, bounceV);
   wall bottom( w, hwlib::xy(   0, 63 ), hwlib::xy( 127, 63 ), 4, bounceH);
   wall left( w, hwlib::xy(   0,  0 ), hwlib::xy(   0, 63 ), 4, bounceV);
   victim vic( w, hwlib::xy(   20,  20 ), hwlib::xy(   50, 40 ));
   ball b( w, hwlib::xy( 50, 20 ), 9, hwlib::xy( 5, 2 ) );
   
   std::array< drawable *, 6 > objects = { &bottom, &right, &left, &top, &vic,  &b };

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

