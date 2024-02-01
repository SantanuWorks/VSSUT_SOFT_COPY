// Write a program in C++ to find the largest number using function overloading.
#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int);

int main(){
	// two
	int a = 34, b = 2;
	cout << "Two numbers are: " << a << " and " << b;
	cout << "\nSum is " << sum(a, b);
	
	// three
	int x = 23, y = 55, z = 84;
	cout << "\n\nThree numbers are: " << x << ", " << y << " and " << z;
	cout << "\nSum is " << sum(x, y, z);
}

int sum(int a, int b, int c){
	return (a+b+c);
}

int sum(int a, int b){
	return (a+b);
}
