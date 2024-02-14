#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n-1; i ++)
		for(int j = 0; j < n-1; j ++)
			if( arr[j] > arr[j+1] ) swap(arr[j], arr[j+1]);
}

void displayArr(int arr[], int n){
	for(int i = 0; i < n; i ++) cout << arr[i] << " ";
}

int main(){
	int n;
	
	cout << "Enter array size: ";
	cin >> n;
	
	int arr[n];
	
	cout << "\nEnter elements: ";
	for(int i = 0; i < n; i ++){
		cin >> arr[i];
	}
	
	cout << "\nOriginal Array: ";
	displayArr(arr, n);
	
	bubbleSort(arr, n);
	
	cout << "\n\nSorted Array: ";
	displayArr(arr, n);
}
