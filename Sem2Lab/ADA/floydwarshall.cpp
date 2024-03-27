#include <bits/stdc++.h>
#define V 5
#define INF 99999
using namespace std;

void printSolution(int dist[][V]);

void floydWarshall(int dist[][V])
{

	int i, j, k;
	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF
						&& dist[i][k] != INF))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	printSolution(dist);
}

void printSolution(int dist[][V])
{
	cout << "All pair shortest path:\n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "INF"
					<< " ";
			else
				cout << dist[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int graph[V][V] = { { 0, 3, 8, INF, -4 },
						{ INF, 0, INF, 1, 7 },
						{ INF, 4, 0, INF, INF },
						{ 2, INF, -5, 0, INF },
						{ INF, INF, INF, 6, 0} };

	floydWarshall(graph);
	return 0;
}
