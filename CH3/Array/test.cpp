/* Test.
 */
#include <iostream>
#include <iterator>
#include <string>
using std::string;

void checkArray(){
		int a[10];
		int b[10] = {};
		int c[10] = {0};
		for(auto i : a){
				std::cout << i<<std::endl;
		}
		std::cout << std::endl;
		for(auto i : b){
				std::cout << i<<std::endl;
		}
		std::cout << std::endl;
		for(auto i : c){
				std::cout << i<<std::endl;
		}
}
constexpr int txt_size() {
		return 10;
}
int ib[10];
string is[10];
int main(){
		unsigned buf_size = 5;
		string is2[10];
		int ia[txt_size()];
		//int id[txt_size()] = {0};
		int ic[5] ={};

		for( auto i : ia){
				std::cout << i <<std::endl;
		}
		std::cout <<std::endl;
		for( auto i : ic){
				std::cout << i <<std::endl;
		}
		std::cout <<std::endl;

		std::cout << " ==== test: begin() and end()"<< std::endl;
		int *pbeg = std::begin(ic);
		int *pend = std::end(ic);
		while(pbeg != pend){
				std::cout << *pbeg << " ";
				++pbeg;
		}
		std::cout << std::endl;
		return 0;

}
