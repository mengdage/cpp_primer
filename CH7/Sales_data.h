#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data{
		Sales_data &combine(const Sales_data &rhs);
		std::string isbn() const {return bookNo;}
		double avg_price() const;

		std::string bookNo;
		unsigned units_sold = 0;
		double revenue =0.0;

};

#endif
