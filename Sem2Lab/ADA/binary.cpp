#include <iostream>
#include <algorithm>

using namespace std;

int c = 0;

int BinarySearch(int arr[], int l, int h, int key){
	c ++;
	int mid = (l+h)/2;
	if( l > h ) return -1;
	else if( arr[mid] == key ) return mid;
	else if( arr[mid] > key ) return BinarySearch(arr, l, mid-1, key);
	else if( arr[mid] < key ) return BinarySearch(arr, mid+1, h, key);
}

void displayArr(int arr[], int n){
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
	
	sort(arr, arr+n);
	
	cout << "\nSorted Array: ";
	displayArr(arr, n);
	
	int in = BinarySearch(arr, 0, n, key);
	
	cout << endl;
	
	if( in == -1 ) cout << "Key not found!";
	else cout << key << " Key found at " << in; 
	
	cout << "\nTotal Comparision: " << c;
	
	return 0;
}
