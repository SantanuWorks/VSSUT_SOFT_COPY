#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string text, patt;
	
	cout << "Enter text: "; 
	cin >> text;
	
	cout << "Enter pattern: ";
	cin >> patt;
	
	int m, n;
	
	m = text.length();
	n = patt.length();
	
	bool flg = true;
	
	cout << "\nString Matching Results:\n";
	
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j ++){
			if( patt[j] != text[i+j] ){
				flg = false;
				break;
			}
		}
		if( flg ){
			cout << "Valid Shift = " << i << endl;
		}
		flg = true;
	}
}


