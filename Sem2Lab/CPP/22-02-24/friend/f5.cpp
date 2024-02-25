// Write a program to declare three classes, int array as data members in each class, perform addition of two data members into array of third class using friend function.
#include <iostream>
using namespace std;

class B;
class C;
class A{
	private:
	int a[5];
	public:
	void input();
	friend C sum(A, B, C);
};

void A::input(){
	cout << "Enter five integers for class A: ";
	for(int k = 0; k < 5; k ++) cin >> a[k];
}

class B{
	private:
	int b[5];
	public:
	void input();
	friend C sum(A, B, C);
};

void B::input(){
	cout << "Enter five integers for class B: ";
	for(int k = 0; k < 5; k ++) cin >> b[k];
}

class C{
	private:
	int c[5];
	public:
	void show();
	friend C sum(A, B, C);
};

void C::show(){
	cout << "Sum of arrays in class C: ";
	for(int k = 0; k < 5; k ++) cout << c[k] << " ";
}

C sum(A a1, B b1, C c1){
	for(int k = 0; k < 5; k ++) c1.c[k] = a1.a[k] + b1.b[k];
	return c1;
}

int main(){
	A a;
	B b;
	C c;
	a.input();
	b.input();
	c = sum(a, b, c);
	c.show();
}
