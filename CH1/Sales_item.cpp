#include<iostream>
#include<string>
#include"Sales_item.h"

int main(){
		Sales_item item1, item2;
		std::string line;
		// read a set of book sales transactions and write them to the standard output
		std::cout << "read and write transactions" << std::endl;
		while(std::getline(std::cin,line)){
				if(line.length() == 0)
						break;
				std::cout << line <<std::endl;
		}
		if(std::cin.fail()){
				std::cout << "fail" << std::endl;
		}
		//read two transactions and print their sum
		std::cout << "input two transactions" << std::endl;
		std::cin >> item1 >> item2; // read a pair of transcations
		std::cout << item1 + item2 << std::endl;
		return 0;
}
