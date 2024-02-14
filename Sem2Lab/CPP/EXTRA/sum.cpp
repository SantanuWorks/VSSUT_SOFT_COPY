#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	long sum = (long)n * (n+1)/2;
	cout << "Sum of first " << n << " natural numbers is " << sum;
} 
