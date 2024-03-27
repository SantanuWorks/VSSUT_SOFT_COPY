// write a program to calculate area of triangle, circle, square and rectangle using virtual base class.

#include <iostream>
using namespace std;

class A{
	protected:
	float a, b, c, s, rad, area;
};

class B: virtual public A{
	public:
	void getdata(){
		cout << "\nEnter base and height: ";
		cin >> a >> b;
		area = 0.5f * a * b;
		cout << "\nArea of triangle: " << area;
	}
};

class C: virtual public A{
	public:
	void getdata2(){
		cout << "\nEnter radius: ";
		cin >> rad;
		area = 3.1415f * rad * rad;
		cout << "\nArea of circle: " << area;
	}
};

class D: public B, public C{
	public:
	void getdata3(){
		cout << "\nEnter side: ";
		cin >> s;
		area = s * s;
		cout << "\nArea of square: " << area;
	}
	void getdata4(){
		cout << "\nEnter length and breadth: ";
		cin >> b >> c;
		area = c * b;
		cout << "\nArea of rectangle: " << area;
	}
};

int main(){
	D d;
	d.getdata();
	d.getdata2();
	d.getdata3();
	d.getdata4();
}
