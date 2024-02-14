#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int a = 0, b = 1;
	cout << "Fibonacci Series: ";
	if( n == 1 ) cout << a;
	else if( n == 2 ) cout << a << " " << b;
	else{
		cout << a << " " << b << " ";
		for(int i = 0; i < n-2; i ++){
			int t = a + b;
			cout << t << " ";
			a = b;
			b = t;
		}
	}
}
