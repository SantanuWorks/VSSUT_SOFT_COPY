// write a program to add two complex numbers using friend function.

#include <iostream>
using namespace std;

class complex{
	int a, b;
	public:
	complex(){
		a = 0, b = 0;
	}
	complex(int m, int n){
		a = m, b = n;
	}
	friend complex operator +(complex t1, complex t2);
	void display(){
		cout << a << " + i " << b;
	}
};

complex operator +(complex t1, complex t2){
	complex temp;
	temp.a = t1.a + t2.a;
	temp.b = t1.b + t2.b;
	return temp;
}

int main(){
	complex a(3, 4);
	complex b(6, 3);
	complex c;
	c = a + b;
	cout << "First Complex Number: ";
	a.display();
	cout << "\nSecond Complex Number: ";
	b.display();
	cout << "\nSum: ";
	c.display();
}
