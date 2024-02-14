#include <iostream>
#include <climits>
#define N 50
using namespace std;

int dim[N], m[N][N], s[N][N];

void pop(int i,  int j){
	if( i == j ) cout << "A" << i; 
	else{
		cout << "( ";
		pop(i, s[i][j]);
		cout << " x ";
		pop(s[i][j] + 1, j);
		cout << " )";
	}
}

void mcm(int i, int j){
	long min = LONG_MAX;
	int tcost, ki = 0;
	if( i == j ) m[i][j] = 0;
	else{
		for(int k = i; k < j; k ++){
			tcost = m[i][k] + m[k+1][j] + dim[i-1] * dim[k] * dim[j];
			if( tcost < min ){
				min = tcost;
				ki = k;	
			} 
		}
		m[i][j] = min;
		s[i][j] = ki;
	}
}

int main(){
	int n, i, j, k;

	cout << "Enter number of dimensions: ";
	cin >> n;
		
	cout << "\nEnter dimensions: ";
	for(i = 0; i < n; i ++ ) cin >> dim[i];
	
	for(int x = 1; x < n; x ++){
		j = x;
		for(int y = 1; y <= n - x; y ++ ){
			i = y;
			mcm(i, j);
			j ++;
		}
	}
	
	cout << "\nTable M:\n";
	for(i = 1; i < n; i ++){
		for(j = 1; j < n; j ++)
			cout << m[i][j] << " ";	
		cout << endl;
	}

	cout << "\nTable S:\n";
	
	for(i = 1; i < n; i ++){
		for(j = 1; j < n; j ++)
			cout << s[i][j] << " ";	
		cout << endl;
	}
	
	cout << "\nCost: " << m[1][n-1];
	
	cout << "\n\nMatrix Chain: ";
	pop(1, n-1);
	
	return 0;
}
