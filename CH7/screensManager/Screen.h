#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>
class Screen{
	friend class Window_mgr;
	public:
			// Type member pos
			typedef std::string::size_type pos;
			// constructors
			Screen() = default;
			Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c){}
			Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' '){}
			
			// function members
			// get the character at the cursor
			char get() const {return contents[cursor];}
			// get the character at a given location
			char get(pos ht, pos wd) const;

			// set the character at the cursor
			Screen &set(char c);
			// set the character at a given location
			Screen &set(pos ht, pos wd, char c);
			
			// move the cursor
			Screen &move(pos r, pos c);

			// display 
   		 	Screen &display(std::ostream &os);
			
			const Screen &display(std::ostream &os) const;
	private:
			// data members
			pos cursor = 0;
			pos height = 0, width = 0;
			std::string contents;

			// do the work of displaying a Screen
			void do_display(std::ostream &os) const;
			

};
inline char Screen::get(pos ht, pos wd) const{
		pos p = ht * width + wd;
		return contents[p];


}

inline Screen& Screen::move(pos r, pos c){
		cursor = r * width + c;
		return *this;
}

inline Screen& Screen::set(char c) {
		contents[cursor] = c;
		return *this;
}
inline Screen& Screen::set(pos ht, pos wd, char c){
		pos p = ht * width + wd;
		contents[p] = c;
		return *this;
}

inline Screen& Screen::display(std::ostream &os){
		do_display(os);
		return *this;

}
inline const Screen& Screen::display(std::ostream &os) const{
		do_display(os);
		return *this;
}
#endif
