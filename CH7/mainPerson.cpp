#include <iostream>
using std::cin; using std::cout; using std::endl;
#include "Person.h"
using namespace std;

int main(){
		Person p1;
		p1.name = "person 1";
		p1.address = "address 1";

		cout << p1.getName() << ": " << p1.getAddress() << endl;

		read(cin , p1);
		print(cout, p1) << endl;
}
