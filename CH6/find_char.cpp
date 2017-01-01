#include<iostream>
#include<string>
using std::string;

string::size_type find_char(const string &s, char c, string::size_type &occurs){
		occurs = 0;
		auto first_occurs = s.size();

		for(string::size_type i = 0; i != s.size(); ++i ){
				if(s[i] == c){
						if(first_occurs == s.size()){
								first_occurs = i;
						}
						++occurs;
				}	
		}
		return first_occurs;
}
int main(){

		string s = "linmeng";
		char c1 = 'm';
		char c2 = 'n';

		string::size_type times =0;
		auto first = find_char(s, c1, times);
		std::cout << "The character " << c1 << " occurs " << times << " times. It first occurs at position." << first <<std::endl; 

		first = find_char(s, c2, times);
		std::cout << "The character " << c2 << " occurs " << times << " times. It first occurs at position." << first << std::endl; 

		return 0;

}
