#include <iostream>
#include <algorithm>

using namespace std;

int c = 0;

int LinearSearch(int arr[], int n, int key){
	for(int i = 0; i < n; i ++){
		c ++;
		if( arr[i] == key ) return i;
	}
	return -1;
}

void displayArr(int arr[], int n){
	cout << "Array: ";
	for( int i = 0; i < n; i ++ ){
		cout << arr[i] << " ";	
	}
}

int main(){
	
	int n, key;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter elements: ";
	for( int i = 0; i < n; i ++ ) cin >> arr[i];
	
	cout << "Enter key: ";
	cin >> key;
	
	cout << "Original Array: ";
	displayArr(arr, n);
	
	int in = LinearSearch(arr, n, key);
	
	cout << endl;
	
	if( in == -1 ) cout << "Key not found!";
	else cout << key << " Key found at " << in; 
	
	cout << "\nTotal Comparision: " << c;
	
	return 0;
}
