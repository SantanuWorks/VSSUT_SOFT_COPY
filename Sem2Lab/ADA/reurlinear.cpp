#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){
	if( n < 0 ) return n;
	else if( arr[n-1] == key ) return n-1;
	else return LinearSearch(arr, n-1, key);
}

int main(){
	int n, key, in;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter elements of array:  ";
	for(int i = 0; i < n; i ++) cin >> arr[i];
	
	cout << "Enter key to search: ";
	cin >> key;
	
	in = LinearSearch(arr, n, key);
	
	if(in == -1) cout << key << " not found!";
	else cout << key << " found at " << in;
}
