#include <bits/stdc++.h>
#define N 500
using namespace std;

struct item{
	int w;
	int p;
};

int t[N][N];

int solvec[N];

item knapsack[N];

bool byratio(item a, item b){
	return (a.w < b.w);
}

void calt(int i, int j){
	if( i == 0 || j == 0 ){
		t[i][j] = 0;
	}
	else{
		int tij = t[i-1][j];
		int proftij;
		if( (j - knapsack[i-1].w) < 0 ) proftij = -1;
		else proftij = knapsack[i-1].p + t[i-1][j - knapsack[i-1].w];
		t[i][j] = max(tij, proftij);
	}
}

void calsolvec(int n, int m){
	for(int i = n; i > 0; i --){
		if( t[i][m] != t[i-1][m] ){
			solvec[i-1] = 1;
			m -= knapsack[i-1].w;
		}
	}
		
}

int main(){
	int n, m;
	float cp = 0;
	
	cout << "Enter no of items: ";
	cin >> n;
	
	cout << "\nEnter weight and profit of items:\n";
	for(int i = 0; i < n; i ++){
		cout << "Item " << i+1 << ": ";
		cin >> knapsack[i].w >> knapsack[i].p;
	}
	
	sort(knapsack, knapsack+n, byratio);
	
	cout << "\nEnter capcity of knapsack: ";
	cin >> m;
	
	cout << "\nItems:\nWeight\tProfit:\n";
	for(int i = 0; i < n; i ++) 
		cout << knapsack[i].w << "\t" << knapsack[i].p << endl;
	
	for(int i = 0; i <= n; i ++){
		for(int j = 0; j <= m; j ++){
			calt(i, j);
		}
	}
	
	cout << "\nTable T:\n";
	for(int i = 0; i <= n; i ++){
		for(int j = 0; j <= m; j ++){
			cout << t[i][j] << "\t";
		}
		cout << endl;
	}
	
	calsolvec(n, m);
	
	cout << "\nSolution Vector: ";
	for(int i = 0; i < n; i ++) cout << solvec[i] << " ";
	
	cout << "\n\nMax. Profit: " << t[n][m];
}
