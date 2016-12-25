#include <iostream>

/*
 * Count consecutive times each distinct value appears in the input.
 */
int main(){
		int curVal = 0, val = 0;
		// Read the first input
		if( std::cin >> curVal){
				int count  = 1; // Store the count for the current value we're processing.
				while(std::cin >> val){ // Read the remaining integers.
						if(val == curVal){
								++count;
						}
						else{
								std::cout << curVal << " occurs " << count << " times."<<std::endl;
								curVal = val;
								count = 1;
						}
				}
				std::cout << curVal << " occurs "
					   	<< count << " times."<<std::endl;
		}
		return 0;
}
