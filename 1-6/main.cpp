// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "sneeuwlandschap.hpp"


int main(int argc, char **argv){
   int a = 0;
   std::cout<<"Hoe veel groter wil je de sneeuw hebben?"<<"\n";
   std::cin>>a;
   // the window in which we want to print the line
   hwlib::target::window w( hwlib::xy( 280, 260 ));   
   sneeuwlandschap sl(w, a);

   

   // keep the window around until we close it
   for(;;){ w.poll(); }       
}
