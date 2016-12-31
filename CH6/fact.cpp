#include <iostream>
#include "CH6.h"
int fact(int v){
		int op = 1;
		while(v >0){
				op *= v--;
		}

		return op;
}

int fact(){
		std::cout << "Input a num: " <<std::flush;
		int ip;
		std::cin >> ip;

		return fact(ip);

}

