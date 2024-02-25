// Write a program for addition of two complex numbers using friend function.
#include <iostream>
using namespace std;

class complex{
	public:
	int real;
	int img;
	void getdata(){
		cout << "\nEnter Real: ";
		cin >> real;
		cout  << "\nEnter Imaginary: ";
		cin >> img;
	}
	void display(){
		cout << "\nSum of two complex numbers is " << real << " + i" << img;
	}
	friend complex sum(complex, complex);
};

complex sum(complex c1, complex c2){
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}

int main(){
	complex c1, c2, c3;
	c1.getdata();
	cout << "First complex: " << c1.real << " + i" << c1.img;
	c2.getdata();
	cout << "\nSecond complex: " << c2.real << " + i" << c2.img;
	c3 = sum(c1, c2);
	c3.display();
}
