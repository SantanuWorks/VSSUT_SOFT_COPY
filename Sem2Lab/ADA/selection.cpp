#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
	int mi;
	for(int i = 0; i < n-1; i ++){
		mi = i;
		for(int j = i + 1; j < n; j ++) if( arr[j] < arr[mi] ) mi = j;
		int temp = arr[mi];
		arr[mi] = arr[i];
		arr[i] = temp;
	}
}

void displayarr(int arr[], int n){
	for(int i = 0; i < n; i ++) cout << arr[i] << " ";
}

int main(){
	int n;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	cout << "\nEnter array items: ";
	for(int i = 0; i < n; i ++){
		cin >> arr[i];
	}
	
	cout << "\nOriginal Array: ";
	displayarr(arr, n);

	selectionsort(arr, n);

	cout << "\n\nSorted Array: ";
	displayarr(arr, n);
}
