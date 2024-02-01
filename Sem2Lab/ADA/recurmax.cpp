#include <iostream>
using namespace std;

int MaxElement(int arr[], int n, int max){
	if( n < 0 ) return max;
	if( max <= arr[n-1] ) max = arr[n-1];
	return MaxElement(arr, n-1, max);
}

int main(){
	int n, max;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter elements of array:  ";
	for(int i = 0; i < n; i ++) cin >> arr[i];
	
	max = MaxElement(arr, n, 0);
	
	cout << "Max element in array is " << max;
}
