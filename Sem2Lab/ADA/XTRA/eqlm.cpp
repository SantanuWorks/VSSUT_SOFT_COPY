#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int n;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	int flg = -1;
	
	cout << "Enter elements: ";
	for( int i = 0; i < n; i ++ ) cin >> arr[i];
	
	int s2 = 0;
	
	int s1 = 0;
	
	for(int i = 1; i < n; i ++){
		s2 += arr[i];
	}

	int eqi = 1;
	
	for( int i = 0; i < n; i ++ ){
		
		s1 += arr[i];
		
		s2 = s2 - arr[eqi];
		
		if( s1 == s2 ){
			flg = eqi;
			break;
		}
		
		eqi ++;
	}

	if( flg == -1 ) cout << "Not found";
	else cout << "fount at " << flg;
	
	return 0;
}
