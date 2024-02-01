#include <iostream>
using namespace std;

int ArrSum(int arr[], int n){
	if( n < 0 ) return 0;
	else return arr[n-1] + ArrSum(arr, n-1);
}

int main(){
	int n, sum;
	
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter elements of array:  ";
	for(int i = 0; i < n; i ++) cin >> arr[i];
	
	sum = ArrSum(arr, n);
	
	cout << "Sum of elements in array is " << sum;
}
