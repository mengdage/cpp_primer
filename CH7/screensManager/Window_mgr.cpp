#include <iostream>
#include <string>
using std::string;
#include "Window_mgr.h"


void Window_mgr::clear(ScreenIndex si){
		Screen &s = screens[si];
		s.contents = string(s.height * s.width, '-');
		s.display(std::cout);
}
