#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
struct Sales_data{
		Sales_data &combine(const Sales_data &rhs);
		std::string isbn() const {return bookNo;}
		double avg_price() const;

		std::string bookNo;
		unsigned units_sold = 0;
		double revenue =0.0;

};

std::istream & read(std::istream & is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);

Sales_data add(const Sales_data &item1, const Sales_data &item2);
#endif
