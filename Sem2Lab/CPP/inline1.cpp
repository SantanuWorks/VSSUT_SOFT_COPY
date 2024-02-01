 // Write a program in C++ to define an inline function and obtain the result.

#include <iostream>
using namespace std;

int sum(int , int );

int main(){
	int a, b;
	
	cout << "Enter a: ";
	cin >> a;
	
	cout << "Enter b: ";
	cin >> b;
	
	int s = sum(a, b);
	
	cout << "Sum of " << a << " and " << b << " is " << s;
}

inline int sum(int a, int b){
	return (a + b);
}
