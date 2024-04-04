// Write a program to invoke member function of base and derived class using pointer of the base class.

#include <iostream>
using namespace std;

class first{
	int b;
	public:
	first(){
		b = 10;
	}
	void display(){
		cout << "\nb = " << b;
	}
};

class second: public first{
	int d;
	public:
	second(){
		d = 20;
	}
	void display(){
		cout << "\nd = " << d;
	}
};

int main(){
	first f;
	first* p;
	second s;
	p = &f;
	cout << "Derived Class:";
	p -> display();
	p = &s;
	cout << "\n\nBase Class:";
	p -> display();
}
