// Write a program in C++ to calculate square of an integer and float number.

#include <iostream>
using namespace std;

int square(int);
float square(float);

int main(){
	int a, asq;
	float b, bsq;
	
	cout << "Enter an integer: ";
	cin >> a;
	
	asq = square(a);
	
	cout << "Enter a float: ";
	cin >> b;
	
	bsq = square(b);
	
	cout << "Square of " << a << " is " << asq;	
	cout << "\nSquare of " << b << " is " << bsq;	
}

inline int square(int a){
	return a*a;
}

inline float square(float b){
	return b*b;
}
