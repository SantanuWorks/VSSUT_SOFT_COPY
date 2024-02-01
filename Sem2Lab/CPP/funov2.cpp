// Write a program in C++ to calculate area of triangle, rectangle, circle and square using function overloading. 

#include <iostream>
using namespace std;

float area(float); // circle
float area(float, float); // trianlge
int area(int, int); // rectangle
int area(int); // square

int main(){
	// circle
	float r = 3.5;
	cout << "Radius of circle: " << r;
	cout << "\nArea of circle: " << area(r);	
	
	// triangle
	float h = 18.4, b = 2.5;
	cout << "\n\nHeight and base of triangle are: " << h << " and " << b;
	cout << "\nArea of triangle: " << area(h, b);
	
	// rectangle
	int l = 10, br = 20;
	cout << "\n\nlength and bredth of rectangle are: " << l << " and " << br;
	cout << "\nArea of triangle: " << area(l, br);
	
	// square
	int side = 12;
	cout << "\n\nSide of square is: " << side;
	cout << "\nArea of square is: " << area(side);
}

float area(float r){
	return 3.1415f * r * r;
}

float area(float base, float height){
	return base * height;
}

int area(int l, int b){
	return l * b;
}

int area(int side){
	return side * side;
}
