#include <iostream>
#include <string>
#include <vector>
//#include <limits>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::numeric_limits;
using std::streamsize;


int main(){
		vector<int> v1;
		int inpt;
		cout << "input some integers: " << endl;

		while(cin >> inpt){
				v1.push_back(inpt);
		}

		for(auto i : v1){
				cout << i << " ";
		}
		cout << endl;

		vector<string> v2;
		string s;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "input some strings seperated by space: " << endl;
		while(cin >> s){
				v2.push_back(s);
		}
		for(auto i : v2){
				cout << i << " ";
		}
		cout << endl;

		
		
		return 0;
}
