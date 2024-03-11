#include <bits/stdc++.h>
#define N 100
using namespace std;

stack<int> stk;
bool visited[N];
int graph[N][N];
int v, e, s;
	
void dfs(int s){
	cout << "DFS Traversal: ";
	stk.push(s);
	while( !stk.empty() ){
		s = stk.top(); stk.pop();
		if( !visited[s] ){
			visited[s] = true;
			cout << s << " ";
		}
		for(int i = 0; i <= v; i ++){
			if( graph[s][i] == 1 ){
				if( !visited[i] ){
					stk.push(i);
				}
			}
		}
	}
}

int main(){
	cout << "Enter no of vertices: ";
	cin >> v;
	
	cout << "Enter no of edges: ";
	cin >> e;
	
	cout << "Enter start, end vertex: ";
	for(int i = 0; i < e; i ++){
		int u, v;
		cin >> u >> v;
		graph[u][v] = 1;
	}
	
	cout << "Enter start vertex: ";
	cin >> s;
	
	dfs(s);
}
