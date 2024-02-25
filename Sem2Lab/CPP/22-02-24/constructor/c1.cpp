// Write a program to define a constructor and initialize class data member variables with constant.
#include <iostream>
using namespace std;

class num{
	private:
	int a, b, c;
	public:
	int x;
	num();
	void show(){
		cout << "\nx = " << x << "\na = " << a << "\nb = " << b << "\nc = " << c;
	}
};

num::num(){
	cout << "Constructor Initialized\n";
	x = 5;
	a = 0;
	b = 1;
	c = 2;
}

int main(){
	num x;
	x.show();
}
