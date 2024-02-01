// Write a program in C++ to swap two numbers using call by reference. 
// using third variable

#include <iostream>
using namespace std;

void swap(int &, int &);

int main(){
	int a, b;
	
	cout << "Enter a: ";
	cin >> a;
	
	cout << "Enter b: ";
	cin >> b;
	
	cout << "Before swaping two numbers: ";
	cout << "a = " << a << ", b = " << b;
	
	swap(a, b);
	
	cout << "\nAfter swaping two numbers: ";
	cout << "a = " << a << ", b = " << b;	
}

void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}
