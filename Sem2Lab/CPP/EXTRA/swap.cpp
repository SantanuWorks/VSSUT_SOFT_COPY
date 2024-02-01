#include <iostream>
using namespace std;
int main(){
	int a, b;
	
	cout << "Enter two number: ";
	cin >> a >> b;
	
	cout << "Before Swap: ";
	cout << "\na =  " << a << ", b = " << b;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "\nBefore Swap: ";
	cout << "\na =  " << a << ", b = " << b;
}
