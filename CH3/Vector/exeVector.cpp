#include <iostream>
#include <string>
#include <vector>
#include <iterator>
//#include <limits>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::numeric_limits;
using std::streamsize;
using std::begin; using std::end;

vector<int> getVector(int *inpt, int len){
		vector<int> outpt;
		for(auto i = 0; i != len; ++i){
				outpt.push_back(*(inpt+i));
		}
		return outpt;
}

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

		int a[] = {1,3,2,1};
		vector<int> v3 = getVector(a, 4);
		for(auto i : v3){
				cout<<i<<" ";
		}
		cout<<endl;

		
		
		return 0;
}
