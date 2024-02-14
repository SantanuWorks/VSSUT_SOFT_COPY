#include <iostream>
using namespace std;

class ShapeArea{
	public:
	float trianglearea(float height, float base){
		return ( height * base * 0.5f );
	}
	
	float circlearea(float rad){
		return ( rad * rad * 3.1415f );
	}
	
	float squarearea(float side){
		return ( side * side );
	}
	
	float traparea(float a, float b, float d){
		return ( (a+b) * d * 0.5f );
	}
	void display(string shape, float area){
		cout << "Area of " << shape << " is " << area << endl; 
	}
};

int main(){
	ShapeArea sa;
	float area;
	
	// triangle
	float base = 10, height = 12;
	area = sa.trianglearea(base, height);
	sa.display("Triangle", area);
	
	// circle
	float rad = 24;
	area = sa.circlearea(rad);
	sa.display("Circle", area);
	
	// square
	float side = 10;
	area = sa.squarearea(side);
	sa.display("Square", area);
	
	// trapezium
	float a = 10, b = 12, d = 6;
	area = sa.traparea(a, b, d);
	sa.display("Trapezium", area);
}
