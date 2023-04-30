#include "vector.hpp"
#include "iostream"
// #include "sstream"

// int main(){
//     // operator<<
//     vector a(1,2);
//     std::cout<<a;

//     vector b;
//     b = a*3;
//     std::cout<<b;

//    vector c;
//     c = 3*a;
//     std::cout<<c;

// }

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sstream"

TEST_CASE( "Operator+, vector" ){
   vector v( 3, 4 );
   vector w;
   w = + v;
   REQUIRE(w == vector(3,4) );   
}

TEST_CASE( "Operator+, vector vector" ){
   vector v( 3, 4 );
   vector w (1,2);
   w = w + v;
   REQUIRE(w == vector(4,6) );   
}

TEST_CASE( "Operator+=" ){
   vector v( 3, 4 );
   vector w (1,2);
   v += w;
   REQUIRE(v == vector(4,6) );   
}

TEST_CASE( "Operator*, int vector" ){
   vector v( 3, 4 );
   int w = 3;
   v = w* v;
   REQUIRE(v == vector(9,12) );   
}

TEST_CASE( "Operator*, vector int" ){
   vector v( 3, 4 );
   int w = 3;
   v = v* w;
   REQUIRE(v == vector(9,12) );   
}

TEST_CASE( "Operator*=" ){
   vector v( 3, 4 );
   int w = 3;
   v *= w;
   REQUIRE(v == vector(9,12) );   
}

TEST_CASE( "Print vector" ){
   vector v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "<3, 4>" );   
}