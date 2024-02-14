#include <iostream>
using namespace std;

class ShapeArea{
	private:
	float squarearea(float side){
		return ( side * side );
	}
	
	protected:
	float traparea(float a, float b, float d){
		return ( (a+b) * d * 0.5f );
	}
	
	public:
	float trianglearea(float height, float base){
		return ( height * base * 0.5f );
	}
	float circlearea(float rad){
		return ( rad * rad * 3.1415f );
	}
	void display(){
		float area;
		
		// triangle
		float base = 10, height = 12;
		area = trianglearea(base, height);
		cout << "Area of triangle is " << area << endl; 
		
		// circle
		float rad = 24;
		area = circlearea(rad);
		cout << "Area of circle is " << area << endl; 		
		
		// square
		float side = 10;
		area = squarearea(side);
		cout << "Area of square is " << area << endl; 
		
		// trapezium
		float a = 10, b = 12, d = 6;
		area = traparea(a, b, d);
		cout << "Area of trapezium is " << area << endl; 
	}
};

int main(){
	ShapeArea sa;
	sa.display();
}
