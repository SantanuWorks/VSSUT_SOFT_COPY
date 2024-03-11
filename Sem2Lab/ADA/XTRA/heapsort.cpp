#include <iostream>
using namespace std;

int hs;

void displayarr(int arr[], int n){
	for(int i = 0; i < n; i ++) cout << arr[i] << " ";
}

void maxheapify(int arr[], int i){
	int l = i*2 + 1;
	int r = i*2 + 2;
	int large = i;
	if( l < hs && arr[l] > arr[i] ) large = l;
	if( r < hs && arr[r] > arr[large] ) large = r;
	if( large != i ){
		swap(arr[i], arr[large]);
		maxheapify(arr, large);	
	}
}

void buildmaxheap(int arr[]){
	for(int i = (hs/2)-1; i >= 0; i --){
		maxheapify(arr, i);
	}
}

// 5 3 17 10 84 19 6 22 9

void heapsort(int arr[], int n){
	buildmaxheap(arr);
	for(int i = n-1; i > 0; i --){
		swap(arr[0], arr[i]);
		hs --;
		maxheapify(arr, 0);
	}
}

int main(){
	int n;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	hs = n;
	
	int arr[n];
	
	cout << "\nEnter array items: ";
	for(int i = 0; i < n; i ++){
		cin >> arr[i];
	}
	
	cout << "\nOriginal Array: ";
	displayarr(arr, n);

	heapsort(arr, n);

	cout << "\n\nSorted Array: ";
	displayarr(arr, n);
}
