// Write a program to show multiple inheritance between two classes.

#include <iostream>
using namespace std;

class A{
	protected:
	int a;
};

class B{
	protected:
	int b;
};

class C{
	protected:
	int c;
};

class D{
	protected:
	int d;
};

class E: public A, public B, public C, public D{
	int e;
	public:
	void getdata(){
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
		cout << "Enter c: ";
		cin >> c;
		cout << "Enter d: ";
		cin >> d;
		cout << "Enter e: ";
		cin >> e;
	}
	void showdata(){
		cout << "a = " << a;
		cout << "\nb = " << b;
		cout << "\nc = " << c;
		cout << "\nd = " << d;
		cout << "\ne = " << e;
	}
};

int main(){
	E e1;
	e1.getdata();
	e1.showdata();
	return 0;
}
