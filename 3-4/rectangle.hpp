#include <hwlib.hpp>
#include "drawable.hpp"


class rectangle : public drawable{
protected:
    hwlib::xy end;


public:
    rectangle(hwlib::window & w, const hwlib::xy start, const hwlib::xy end, std::vector<int> stuiter={1,1}) :
            drawable( w , start , end-start, stuiter),
            end(end)
    {}

//    void draw() {
//        hwlib::rectangle r(location,end);
//        r.draw(w);
//    }

};
