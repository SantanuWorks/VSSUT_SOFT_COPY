#include <iostream>
#include <algorithm>
using namespace std;

struct item{
	int w;
	int p;
	float pperw;
	float r;
};

bool byratio(item a, item b){
	return (a.pperw > b.pperw);
}

int main(){
	int n, c, rw = 0;
	float cp = 0;
	
	cout << "Enter no of items: ";
	cin >> n;
	
	item knapsack[n];
	
	cout << "\nEnter weight and profit of items:\n";
	for(int i = 0; i < n; i ++){
		cout << "Item " << i+1 << ": ";
		cin >> knapsack[i].w >> knapsack[i].p;
		knapsack[i].pperw = (float) knapsack[i].p / knapsack[i].w;
	}
	
	cout << "\nEnter capcity of knapsack: ";
	cin >> c;
	
	rw = c;
	
	sort(knapsack, knapsack+n, byratio);
	
	cout << "\nItems:\nWeight\tProfit:\tProfit/weight\n";
	for(int i = 0; i < n; i ++) 
		cout << knapsack[i].w << "\t" << knapsack[i].p << "\t" << knapsack[i].pperw << endl;
	
	for(int i = 0; i < n; i ++){
		if( knapsack[i].w > rw ){
			cp = cp + ((float)rw/knapsack[i].w) * knapsack[i].p;
			knapsack[i].r = (float)rw/knapsack[i].w;
			break;
		}
		else{
			rw = rw - knapsack[i].w;
			cp = cp + knapsack[i].p;
			knapsack[i].r = 1;
		}
		
	}
	
	cout << "\n\nMax. Profit: " << cp;
	
	cout << "\n\nSolution Vector: ";
	for(int i = 0; i < n; i ++) cout << knapsack[i].r << " ";
}
