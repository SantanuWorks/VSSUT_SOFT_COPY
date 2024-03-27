// write a program to perform multiplication of integer and object using member function.

#include <iostream>
using namespace std;

class num{
	int a, b, c, d;
	public:
	void getdata();
	void show();
	num operator *(num);
};

void num :: getdata(){
	cout << "\nEnter a, b, c, d: ";
	cin >> a >> b >> c >> d;
}

void num :: show(){
	cout << "\na = " << a;
	cout << "\nb = " << b;
	cout << "\nc = " << c;
	cout << "\nd = " << d;
}

num num::operator *(num t){
	num temp;
	temp.a = a * t.a;
	temp.b = b * t.b;
	temp.c = c * t.c;
	temp.d = d * t.d;
	return temp;
}

int main(){
	num a, b, c;
	a.getdata();
	a.show();
	b.getdata();
	b.show();
	c = a * b;
	cout << "\Product is:\b";
	c.show();
}

