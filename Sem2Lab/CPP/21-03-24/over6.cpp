// write a program to add two complex numbers using member function.

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
	complex operator +(complex t){
		complex temp;
		temp.a = a + t.a;
		temp.b = b + t.b;
		return temp;
	}
	void display(){
		cout << a << " + i " << b;
	}
};

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
