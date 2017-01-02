#include <iostream>
#include <initializer_list>


int sum(std::initializer_list<int> vars){
		int s = 0;
		for(auto i : vars){
				s += i;
		}
		return s;
}

int main(int argc, char **argv){
		std::cout << sum({1,2,3,}) << std::endl;
		return 0;
}
