#include<iostream>
#include<string>
#include"Sales_data.h"

int main(){
		Sales_data item1("aa1", 2, 20.0);

		std::cout << "Input the data:" << std::flush;
		Sales_data item2(std::cin);

		Sales_data item3;
		read(std::cin, item3);

		print(std::cout, item1)<<std::endl;
		print(std::cout, item2)<<std::endl;
		print(std::cout, item3)<<std::endl;

}
