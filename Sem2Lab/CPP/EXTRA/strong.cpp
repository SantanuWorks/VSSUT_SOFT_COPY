#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int s = 0;
	int t = n;
	
	while( t > 0 ){
		int d = t%10;
		int f = 1;
		for( int i = 2; i <= d; i ++ ) f *= i;
		s += f;
		f = 1;
 		t /= 10;
	}
	
	if( s == n ) cout << n << " is strong.";
	else cout << n << " is not strong.";
}
