#include "Screen.h"

void Screen::do_display(std::ostream &os) const {
		for(pos i = 0; i != height; ++i){
				os << contents.substr(i*height, width) << std::endl;
		}
}
