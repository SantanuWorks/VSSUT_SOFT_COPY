// Write a program calculate area and circumference of a circle using constructor overloading.
#include <iostream>
using namespace std;

class circle{
	private:
	int r;
	float area;
	float cir;
	public:
	circle(){
		r = 0;
		area = 0.0f;
		cir = 0.0f;
	}
	circle(int rad){
		r = rad;
		area = 3.1415f * r * r;
		cir = 3.1415f * r * 2;
	}
	circle(circle &c){
		r = c.r;
		area = c.area;
		cir = c.cir;
	}
	~circle(){
		cout << "\nDestructor Initialized!\n";
	}
	void display(){
		cout << "Radius: " << r << ", Area = " << area << ", Circumference: " << cir << endl;
	}
};

int main(){
	circle c1;
	c1.display();
	circle c2(5);
	c2.display();
	circle c3(c2);
	c2.display();
}
