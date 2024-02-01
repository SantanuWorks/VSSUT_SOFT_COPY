#include <iostream>
using namespace std;
int main(){
	int s, e;
	cout << "Enter start and end: ";
	cin >> s >> e;
	cout << "Prime numbers between " << s << " and " << e << " are ";
	for(int i = s; i <= e; i ++){
		int c = 0;
		if( i == 1 ) continue;
		for( int j = 2; j < i; j ++ ){
			if( i%j == 0 ) c ++;
		}
		if( c == 0 ) cout << i << " ";
	}
}
