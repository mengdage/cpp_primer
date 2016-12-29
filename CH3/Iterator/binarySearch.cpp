#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>
using std::vector;

int main(){
		// make a dataset of integers from 1 to 10
		vector<int> data;
		for(int i = 0; i <=10; ++i){
				data.push_back(i);
		}

		// read a number to search in the dataset
		int sought;
		cin >> sought;

		auto beg = data.begin();
		auto end = data.end();
		auto mid = beg + (end-beg)/2;

		while(beg != end && *mid != sought){
				if(sought < *mid){
						end = mid;
				}
				else{
						beg = mid+1;
				}
				mid = beg + (end-beg)/2;
		}

		cout << "find it! "<< *mid <<endl;
		return 0;

}
