// Write a program to add two complex numbers using constructor.
#include <iostream>
using namespace std;

class complex{
	int real;
	int img;
	public:
	complex(){
		real = 0;
		img = 0;
	}
	complex(int r, int i){
		real = r;
		img = i;
	}
	complex add(complex c1, complex c2){
		complex t;
		t.real = c2.real + c1.real;
		t.img = c2.img + c1.img;
		return t;
	}
	void display(){
		cout << real << "+i" << img;
	}
};

int main(){
	complex a(3, 5);
	cout << "First complex number: ";
	a.display();
	complex b(6, 2); 
	cout << "\nSecond complex number: ";
	b.display();
	complex c = c.add(a, b);
	cout << "\nSum of two complex numbers: ";
	c.display();
}
