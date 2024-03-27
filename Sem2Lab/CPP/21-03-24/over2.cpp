
// write a program to overload operator for object using ++;

#include <iostream>
using namespace std;

class num{
	int a, b, c, d;
	public:
	num(int i, int j, int k, int l){
		a = i;
		b = j;
		c = k;
		d = l;
	}
	void show();
	void operator ++();
	void operator --();
};

void num::operator ++(){
	a = ++ a;
	b = ++ b;
	c = ++ c;
	d = ++ d;
}

void num::operator --(){
	a = -- a;
	b = -- b;
	c = -- c;
	d = -- d;
}

void num::show(){
	cout << "\na = " << a;
	cout << "\nb = " << b;
	cout << "\nc = " << c;
	cout << "\nd = " << d;
}

int main(){
	num x(2, 3, 4, 5);
	++ x;
	x.show();
	-- x;
	x.show();
}

