// Write a program to calculate area of a square, circle, rectangle, triangle and trapezium using constructor overloading.
#include <iostream>
using namespace std;

class ShapeArea{
	float area;
	public:
	// triangle
	ShapeArea(float height, float base){
		area = height * base * 0.5f;
	}
	// circle
	ShapeArea(float rad){
		area = rad * rad * 3.1415f;
	}
	// square
	ShapeArea(int side){
		area = side * side;
	}
	// trapezium
	ShapeArea(float a, float b, float d){
		area = (a+b) * d * 0.5f;
	}
	// rectangle
	ShapeArea(int l, int b){
		area = l * b;
	}
	void display(string shape){
		cout << "Area of " << shape << " is " << area << endl; 
	}
};

int main(){
	// triangle
	ShapeArea t(5.5f, 6.6f);
	t.display("Triangle");
	
	// circle
	ShapeArea c(5.0f);
	c.display("Circle");
	
	// square
	ShapeArea s(3);
	s.display("Square");
	
	// trapezium
	ShapeArea tr(2.5f, 5.6f, 4.6f);
	tr.display("Trapezium");
	
	// rectangle
	ShapeArea r(4, 5);
	r.display("Rectangle");
}
