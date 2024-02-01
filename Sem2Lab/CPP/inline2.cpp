// Write a program in C++ to define an inline function cube for calculating cube of a number. 

#include <iostream>
using namespace std;

int cube(int);

int main(){
	int i, j, n = 10;
	
	i = cube(n);
	j = cube(8);
	
	cout << "Cube of " << n << " is " << i;
	cout << "\nCube of " << 8 << " is " << j;
}

inline int cube(int a){
	return (a*a*a);
}
