#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
	int i, j;
	int key;
	for(i = 1; i < n; i ++){
		j = i - 1;
		key = arr[i];
		while( j >= 0 && key < arr[j] ){
			arr[j + 1] = arr[j];
			j --;
		}
		arr[j + 1] = key;
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

	insertionsort(arr, n);

	cout << "\n\nSorted Array: ";
	displayarr(arr, n);
}
