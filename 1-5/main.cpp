// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "rectangle.hpp"

int main(int argc, char **argv){
    
   // the window in which we want to print the line
   hwlib::target::window w( hwlib::xy( 256, 128 ));    

   fillrectangle eyeR( w, 155, 45, 180, 80 );
   eyeR.printfilled();

   fillrectangle eyeL( w, 60, 45, 85, 80 );
   eyeL.printfilled();

   fillrectangle mouth( w, 100, 100, 140, 120 );
   mouth.printfilled();

   fillrectangle mouthL( w, 90, 90, 100, 110 );
   mouthL.printfilled();
   
   fillrectangle mouthR( w, 140, 90, 150, 110 );
   mouthR.printfilled();

   // keep the window around until we close it
   for(;;){ w.poll(); }       
}
