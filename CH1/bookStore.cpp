#include<iostream>
#include"Sales_item.h"

int main(){
		Sales_item total;

		// read the first transaction and ensure there are data to process
		if(std::cin >> total){
				Sales_item curItem;
				// read and process the remaining transcations
				while(std::cin >> curItem){
						if(curItem.isbn() == total.isbn()){
								total += curItem;
						}
						else{
								std::cout << total << std::endl;
								total = curItem;
						}
				}
				std::cout << total << std::endl;
		}
		else{
				std::cout << "NO data!" <<std::endl;
				return -1;
		}
}
