#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
class Sales_data{

friend std::istream & read(std::istream & is, Sales_data &item);
friend std::ostream &print(std::ostream &os, const Sales_data &item);

friend Sales_data add(const Sales_data &item1, const Sales_data &item2);
	public:
		// constructor
		Sales_data() = default;
		Sales_data(const std::string &s) : bookNo(s) {}
		Sales_data(const std::string &s, const unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) { }
		Sales_data(std::istream &is);
		//
		Sales_data &combine(const Sales_data &rhs);
		std::string isbn() const {return bookNo;}
		double avg_price() const;

	private:
		// data member
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue =0.0;

};

std::istream & read(std::istream & is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);

Sales_data add(const Sales_data &item1, const Sales_data &item2);
#endif
