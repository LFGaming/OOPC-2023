#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "ostream"

/// @file

/// \brief
/// Vector ADT
/// \details
/// This is an ADT that implements vector type.
class vector {
    public:
        int x;
        int y;

    vector(){};
    
    vector( int x, int y ):
        x( x ), y( y )
    {}

    /// \brief   
    /// The onesided (monadic) operator+
    /// \details
    /// This operator+ returns self.
     vector operator+() const {
        return vector( x, y );
    }

    /// \brief   
    /// The operator+
    /// \details
    /// This operator+ adds x and y of the first vector with the second vector and returns a new vector.
     vector operator+(const vector & rhs) const {
        return vector( x + rhs.x, y + rhs.y );
    }

    /// \brief   
    /// The operator+=
    /// \details
    /// The operator+= adds the right to self.
    vector operator+=( const vector & rhs ){
        x = x + rhs.x;
        y = y + rhs.y;
        return *this;
    }

    /// \brief   
    /// The operator*
    /// \details
    /// The operator* multiplies x and y with int.
    vector operator*( int multiplier ){
        return vector( x * multiplier, y * multiplier );
    }

    /// \brief   
    /// The operator*=
    /// \details
    /// The operator*= multiplies the vector with parameter int, and changes vector.
    vector operator*=( int k ){
       x = x*k;
       y = y*k;
        return *this;
    }

    /// \brief   
    /// Print vector
    /// \details
    /// The operator<< prints the output of the vector in the form <x, y>
    friend std::ostream & operator<<( std::ostream & lhs, const vector & rhs ){
        return lhs 
            << "<" 
            << rhs.x 
            << ", " 
            << rhs.y
            << ">";
    }

   /// \brief   
   /// compare two vectors
   /// \details
   /// This operator tests for equality. It returns true
   /// if and only if the x and y of both
   /// operands are equal.
   bool operator==( const vector & rhs ) const {
      return ( x == rhs.x ) && ( y == rhs.y );
   }
};

/// \brief   
/// The operator*
/// \details
/// The operator* multiplies int with x and y.
inline vector operator*(int k, const vector & rhs){
    return vector( rhs.x * k, rhs.y * k );
}
#endif