// Write a program to invoke a function using scope resolution operator when base and derived class have same funtion. 

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
	second s;
	cout << "Derived Class:";
	s.display();
	cout << "\n\nBase Class:";
	s.first::display();
}
