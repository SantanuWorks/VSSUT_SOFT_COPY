#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int t = n, rn = 0;
	while( t > 0 ){
		rn = rn * 10 + t%10;
		t /= 10;
	}
	if( rn == n ) cout << n << " is a pelindrome number.";
	else cout << n << " is a not pelindrome number.";
}
