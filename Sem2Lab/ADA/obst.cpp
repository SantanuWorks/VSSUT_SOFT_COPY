#include <iostream>
#include <climits>
#define N 50
using namespace std;

float w[N][N], e[N][N], p[N], q[N];
int root[N][N];
string keys[N];

void calw(int i, int j){
	if( j == i - 1 ) w[i][j] = q[i-1];
	else w[i][j] = w[i][j-1] + p[j] + q[j];
}

void cale(int i, int j){
	if( j == i - 1 ) e[i][j] = q[i-1];
	else{
		float min = LONG_MAX;
		int minr;
		float tempe;
		for(int r = i; r <= j; r ++){
			tempe = e[i][r-1] + e[r+1][j] + w[i][j];
			if( min > tempe ){
				min = tempe;
				minr = r; 
			}
		}
		e[i][j] = min;
		root[i-1][j] = minr;
	}
}

void printOBST(int i, int j){
	if( i == j ) return;
	else cout << keys[root[i][j] - 1] << " ";
	printOBST(i, root[i][j]-1);
	printOBST(root[i][j], j);
}

int main(){
	int n, i, j;
	
	cout << "Enter number of keys: ";
	cin >> n;
	
	//	success propability count
	int pn = n;
	// failure propability count
	int qn = n + 1;
	
	// p		 0.15 0.10 0.05 0.10 0.20
	// q	0.05 0.10 0.05 0.05 0.05 0.10
	
	cout << "\nEnter keys: ";
	for(i = 0; i < n; i ++ ) cin >> keys[i];
	
	cout << "\nEnter success propability for keys: ";
	for(i = 1; i <= pn; i ++ ) cin >> p[i];
	
	cout << "\nEnter failure propability for keys: ";
	for(i = 0; i < qn; i ++ ) cin >> q[i];
	
	// calculate w
	for(int x = 0; x < qn; x ++){
		j = x;
		for(int y = 1; y <= qn - x; y ++ ){
			i = y;
			calw(i, j);
			j ++;
		}
	}
	
	// calculate w
	for(int x = 0; x < qn; x ++){
		j = x;
		for(int y = 1; y <= qn - x; y ++ ){
			i = y;
			cale(i, j);
			j ++;
		}
	}
	
	cout << "\nTable W:\n\n";
	for(i = 1; i <= qn; i ++){
		for(j = 0; j < qn; j ++)
			printf("%.2f  ", w[i][j]);	
		cout << "\n\n";
	}

	cout << "\nTable E:\n\n";
	for(i = 1; i <= qn; i ++){
		for(j = 0; j < qn; j ++)
			printf("%.2f  ", e[i][j]);
		cout << "\n\n";
	}
	
	cout << "\nTable Root:\n\n";
	for(i = 0; i < n; i ++){
		for(j = 1; j <= n; j ++)
			cout << root[i][j] << "  ";	
		cout << "\n\n";
	}
	
	cout << "\nCost: " << e[1][qn-1];
	
	cout << "\n\nOptimal Binary Search Tree: ";
	printOBST(0, n);
}
