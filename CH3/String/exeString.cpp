#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::flush;
using std::ispunct;

string s = "lin meng is best!!";
int main(){
		string original = s;
		// change characters in s to X
		for(auto &c : s){
				c = 'X';
		}
		cout << "s is: " << s <<endl;

		// restore the s
		s = original;
		
		// change characters in s to X
		for(char &c : s){
				c = 'X';
		}
		cout << "s is: " << s <<endl;

		// restore the s
		s = original;

		string t;
		cout << t[0] << endl;

		// read a string of characters and write it but with punctuations removed
		getline(cin, t);
		for( auto c : t){
				if(!ispunct(c)){
						cout << c << flush;
				}
		}
		cout <<endl;

		return 0;

		
}
