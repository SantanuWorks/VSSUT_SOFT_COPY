#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int s = 0;
	for( int i = 1; i < n; i ++ ){
		if( n%i==0 ){
			s += i;
		}
	}
	if( s == n ) cout << n << " is perfect.";
	else cout << n << " is not perfect.";
}
