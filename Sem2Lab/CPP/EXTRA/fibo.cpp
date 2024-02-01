#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int a = 1, b = 1;
	cout << "Fibonacci Series: " << a << " " << b << " ";
	for(int i = 0; i < n-2; i ++){
		int t = a + b;
		cout << t << " ";
		a = b;
		b = t;
	}
}
