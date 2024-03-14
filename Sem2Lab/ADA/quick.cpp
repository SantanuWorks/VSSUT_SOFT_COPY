#include <iostream>
using namespace std;

void displayarr(int arr[], int n){
	for(int i = 0; i < n; i ++) cout << arr[i] << " ";
}

// 5 3 17 10 84 19 6 22 9

int partition(int arr[], int l, int h){
	int pivot = arr[h];
	int i = l - 1;
	for(int j = l; j < h; j ++){
		if( arr[j] <= pivot ){
			i ++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[h]);
	return (i+1);	
}

void quicksort(int arr[], int l, int h){
	int p;
	if( l < h ){
		p = partition(arr, l, h);
		quicksort(arr, l, p-1);
		quicksort(arr, p+1, h);
	}
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

	quicksort(arr, 0, n-1);

	cout << "\n\nSorted Array: ";
	displayarr(arr, n);
}
