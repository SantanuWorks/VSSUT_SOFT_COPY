// Write a program to read value through keyboard using constructor.
#include <iostream>
using namespace std;

class num{
	private:
	int a, b, c;
	public:
	num();
	void show(){
		cout << "\na = " << a << "\nb = " << b << "\nc = " << c;
	}
};

num::num(){
	cout << "Constructor Initialized\n";
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
}

int main(){
	num x;
	x.show();
}
