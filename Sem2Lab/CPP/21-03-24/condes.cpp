// write a program to show sequence of execution of constructor and destructor in multiple inheritance.

#include <iostream>
using namespace std;

class A{
	public:
	A(){
		cout << "Class A: Constructor!";
	}
	~A(){
		cout << "\nClass A: Destructor!";
	}
};

class B: public A{
	public:
	B(){
		cout << "\nClass B: Constructor!";
	}
	~B(){
		cout << "\nClass B: Destructor!";
	}
};

class C: public B{
	public:
	C(){
		cout << "\nClass C: Constructor!";
	}
	~C(){
		cout << "\nClass C: Destructor!";
	}
};


int main(){
	C c;
}
