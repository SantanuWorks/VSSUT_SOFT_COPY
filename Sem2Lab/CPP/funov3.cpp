// Write a program in C++ to find the largest number using function overloading.
#include <iostream>
using namespace std;

int large(int, int, int);
float large(float, float, float);

int main(){
	// int
	int a = 34, b = 2, c = 88;
	cout << "Three numbers are: " << a << ", " << b << " and " << c;
	cout << "\nLargest number among three is " << large(a, b, c);
	
	// float
	float x = 3.4, y = 2.0, z = 8.8;
	cout << "\n\nThree numbers are: " << x << ", " << y << " and " << z;
	cout << "\nLargest number among three is " << large(x, y, z);
}

int large(int a, int b, int c){
	if( a >= b && a >= c ) return a;
	else if( b >= a && b >= c ) return b;
	else return c;
}

float large(float a, float b, float c){
	if( a >= b && a >= c ) return a;
	else if( b >= a && b >= c ) return b;
	else return c;
}
