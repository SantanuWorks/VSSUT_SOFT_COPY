#include <iostream>
#include <algorithm>

using namespace std;

int c = 0;

void BubbleSort(int arr[], int n){
	
	for(int i = 0; i < n-1; i ++){
		
		for(int j = 0; j < n-1; j ++){
			
			if( arr[j] > arr[j+1] ){
				
				int t = arr[j];
				
				arr[j] = arr[j+1];
				
				arr[j+1] = t;
				
				c ++;
				
			}
			
		}
		
	}
	
}

void displayArr(int arr[], int n){
	cout << "Array: ";
	for( int i = 0; i < n; i ++ ){
		cout << arr[i] << " ";	
	}
}

int main(){
	
	int n;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter elements: ";
	for( int i = 0; i < n; i ++ ) cin >> arr[i];
	
	cout << "Original Array: ";
	displayArr(arr, n);
	
	BubbleSort(arr, n);
	
	cout << "\nSorted Array: ";
	displayArr(arr, n);
	
	cout << endl;
	
	cout << "Total Comparision: " << c;
	
	return 0;
}
