// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "circle.hpp"
#include "rectangle.hpp"


int main(int argc, char **argv){
   int a = 0;
   std::cout<<"Hoe veel groter wil je de sneeuw hebben?"<<"\n";
   std::cin>>a;
   // the window in which we want to print the line
   hwlib::target::window w( hwlib::xy( 280, 260 ));   

   // Snow Golem
   rectangle square( w, 20, 240, 40, 259 );
   square.print(); 
   rectangle square2( w, 23, 230, 37, 240 );
   square2.print();
   rectangle square3( w, 25, 220, 35, 230 );
   square3.print();
   fillrectangle eye1( w, 27, 223, 27, 223 );
   eye1.printfilled();
   fillrectangle eye2( w, 33, 223, 33, 223 );
   eye2.printfilled();
   fillrectangle mouth( w, 27, 228, 33, 228 );
   mouth.printfilled();
   fillrectangle armL( w, 15, 232, 23, 232 );
   armL.printfilled();
   fillrectangle armR( w, 37, 232, 45, 232 );
   armR.printfilled();


   // snow
   circle circle1( w, 40, 200, 10+a );
   circle1.print();
   circle circle2( w, 200, 230, 7+a );
   circle2.print();
   circle circle3( w, 150, 200, 4+a );
   circle3.print();
   circle circle4( w, 75, 190, 5+a );
   circle4.print();
   circle circle5( w, 170, 150, 10+a );
   circle5.print();


   //cloud
   fillrectangle rect( w, 10, 80, 20, 110 );
   rect.printfilled();
   fillrectangle rect2( w, 20, 70, 30, 80 );
   rect2.printfilled();
   fillrectangle rect3( w, 30, 60, 60, 70 );
   rect3.printfilled();
   fillrectangle rect4( w, 60, 70, 70, 80 );
   rect4.printfilled();
   fillrectangle rect5( w, 70, 50, 80, 70 );
   rect5.printfilled();
   fillrectangle rect6( w, 80, 30, 90, 50 );
   rect6.printfilled();
   fillrectangle rect7( w, 90, 20, 110, 30 );
   rect7.printfilled();
   fillrectangle rect8( w, 110, 10, 150, 20 );
   rect8.printfilled();
   fillrectangle rect9( w, 150, 20, 170, 30 );
   rect9.printfilled();
   fillrectangle rect10( w, 170, 30, 180, 50 );
   rect10.printfilled();
   fillrectangle rect11( w, 180, 50, 190, 60 );
   rect11.printfilled();
   fillrectangle rect12( w, 190, 60, 200, 70 );
   rect12.printfilled();
   fillrectangle rect13( w, 200, 50, 210, 60 );
   rect13.printfilled();
   fillrectangle rect14( w, 210, 40, 240, 50 );
   rect14.printfilled();
   fillrectangle rect15( w, 240, 50, 250, 60 );
   rect15.printfilled();
   fillrectangle rect16( w, 250, 60, 260, 70 );
   rect16.printfilled();
   fillrectangle rect17( w, 260, 70, 270, 110 );
   rect17.printfilled();
   fillrectangle rect18( w, 20, 110, 260, 120 );
   rect18.printfilled();

   

   // keep the window around until we close it
   for(;;){ w.poll(); }       
}
