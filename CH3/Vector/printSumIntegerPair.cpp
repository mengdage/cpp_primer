#include<iostream>
using std::cin; using std::cout; using std::endl;

#include<vector>
using std::vector;

int main(){
		vector<int> v;
		int inpt;
		// read a sequence of integers
		while(cin >> inpt){
				v.push_back(inpt);
		}

		// check if enough inputs
		int size = v.size();
		if(size<2){
				cout << " too few integers!" <<endl;
				return -1;
		}

		// print the sum of each pair of adjacent elemets
		for(int i = 0; i <= size -2; i++){
				cout << v[i] << " + " << v[i+1] << " = " << v[i] + v[i+1] <<endl;
		}

		cout <<endl;
		// print the sum of ...
		for(int i = 0, j = size-1; i <j; ++i, --j){
				cout << v[i] << " + " << v[j] << " = " << v[i] + v[j] <<endl;
		}
		return 0;
}
