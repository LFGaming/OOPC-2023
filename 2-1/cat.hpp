#ifndef CAT_HPP
#define CAT_HPP
#include <algorithm> // std::min
#include <cstdint> // uint8_t
class cat {
private:
int n_lives;
// color of the cat:
uint8_t red;
uint8_t green;
uint8_t blue;
public:
cat(uint8_t red, uint8_t green, uint8_t blue, int n_lives = 9) :
n_lives(n_lives), red(red), green(green), blue(blue) {
}
cat() :
n_lives(9), red(7), green(4), blue(5) {
}
cat operator+(const cat& rhs) const {
return cat( (red + rhs.red) / 2, (green + rhs.green) /
2,
(blue + rhs.blue) / 2, n_lives + rhs.n_lives);
}
cat& operator*=(const cat& rhs) {
red = std::min(red * rhs.red , 255);
green = std::min(green * rhs.green, 255);
blue = std::min(blue * rhs.blue , 255);
n_lives *= rhs.n_lives;
return *this;
}
};
#endif // CAT_HPP