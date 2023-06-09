#include <iostream>
#include "hwlib.hpp"
#include "mixed.hpp"

int main(){
   int x;
   std::cout<<"how big do you want the head?: "<<std::endl;
   std::cin>>x;
   
   hwlib::target::window w( hwlib::xy( 128, 64 ));
   
   guy figure(w, 85, 40, 95, 60, 100, 30, 110, 20, 80, 70, 90, 15 - x/2, x, 80, 20, 100, 50);
   figure.print();

   // keep the window around until we close it
   for(;;){ w.poll(); }       
};