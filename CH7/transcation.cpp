#include<iostream>
#include<string>
#include"Sales_data.h"

int main(){
		Sales_data item1, item2;
		item1.bookNo = "aa1";
		item1.units_sold = 2;
		item1.revenue = 20.0;

		item2.bookNo = "aa1";
		item2.units_sold = 4;
		item2.revenue = 35.0;

		std::cout << item1.isbn() <<std::endl;
		std::cout << item1.avg_price() <<std::endl;
		std::cout << item1.combine(item2).avg_price() << std::endl;
}