#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int getstrinteq(string s){

    stringstream geek;
 
    geek << s;
 
    int x = 0;
    
    geek >> x;
	
	return x;
}

int main(){
	
	string text, patt;
	int q, b;
	
	cout << "Enter text: "; 
	cin >> text;
	
	cout << "Enter pattern: ";
	cin >> patt;
	
	cout << "Enter prime integer: ";
	cin >> q;
	
	cout << "Enter no of batches: ";
	cin >> b;
	
	int m, n;
	
	m = text.length();
	n = patt.length();
	
	int pattnum = getstrinteq(patt);
	int pattval = pattnum % q;
	
	cout << "\nString Matching Results:\n";
	
	for(int i = 0; i < m; i ++){
		
		string substr = text.substr(i, b);
		
		int strnum = getstrinteq(substr);
		
		if( strnum % q == pattval ){
			
			if( strnum == pattnum )				
				cout << "Valid Shift at " << i << endl;
			else
				cout << "Spurious Hit at " << i << endl;
			
		}	
	}
}
