#include <bits/stdc++.h>
#define N 100
using namespace std;

list<int> q;
bool visited[N];
int graph[N][N];
int v, e, s;
	
void bfs(int s){
	cout << "BFS Traversal: ";
	visited[s] = true;
	q.push_back(s);
	while( !q.empty() ){
		s = q.front();
		cout << s << " ";
		q.pop_front();
		for(int i = 0; i <= v; i ++){
			if( graph[s][i] == 1 ){
				if( !visited[i] ){
					visited[i] = true;
					q.push_back(i);
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
	
	bfs(s);
}
