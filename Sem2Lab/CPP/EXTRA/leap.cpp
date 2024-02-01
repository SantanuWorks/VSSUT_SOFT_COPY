#include <iostream>
using namespace std;
int main(){
	int y;
	
	cout << "Enter year: ";
	cin >> y;
	
	if( y%100!=0 && y%4==0 ) cout << y << " is leap year.";
	else if( y%400==0 ) cout << y << " is leap year.";
	else cout << y << " is not leap year.";
}
