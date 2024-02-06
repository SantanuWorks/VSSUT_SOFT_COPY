#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h){
	int n1, n2;
	int i, j, k = l;
	
	n1 = m - l + 1;
	n2 = h - m;
	
	int larr[n1], rarr[n2];
	
	for(i = 0; i < n1; i ++ ) larr[i] = arr[l+i];
	for(j = 0; j < n1; j ++ ) rarr[j] = arr[m+1+j];
	
	i = 0, j = 0;
	
	while(i < n1 && j < n2){
		if( larr[i] <= rarr[j] ){
			arr[k] = larr[i];
			i ++;
		}
		else
		{
			arr[k] = rarr[j];
			j ++;
		}
		k ++;
	}
	
	while(i < n1){
		arr[k] = larr[i];
		k ++;
		i ++;
	}
	
	while(j < n2){
		arr[k] = rarr[j];
		k ++;
		j ++;
	}		
}

void mergesort(int arr[], int l, int h){
	if( l < h ){
		int m = (l+h)/2;
		mergesort(arr, l, m);
		mergesort(arr, m+1, h);
		merge(arr, l, m, h);
	}
}

void printarr(int arr[], int n){
	if(n == 0) return;
	else{
		printarr(arr, n-1);
		cout << arr[n-1] << " ";
	}
}

int main(){
	int n;
	
	cout << "Enter size of the array: ";
	cin >> n;
	
	int arr[n];
	
	cout << "\nEnter array elements: ";
	for(int i = 0; i < n; i ++) cin >> arr[i];
	
	cout << "\nOriginal Array: ";
	printarr(arr, n);
	
	mergesort(arr, 0, n-1);
	
	cout << "\n\nSorted Array: ";
	printarr(arr, n);
} 
