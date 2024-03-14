#include <iostream>
#include <climits>
using namespace std;

#define V 100

int findMinKey(int key[], bool mstSet[], int vertices) {
    int min = INT_MAX, minIndex;

    for (int v = 0; v < vertices; v++) {
        if (!mstSet[v] && key[v] < min) {
            min = key[v];
            minIndex = v;
        }
    }

    return minIndex;
}

void printMST(int parent[], int graph[V][V], int vertices) {
    cout << "Edge \tWeight\n";
    int minCost = 0; // To store the minimum cost
    for (int i = 1; i < vertices; i++) {
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << "\n";
        minCost += graph[i][parent[i]];
    }
    cout << "Minimum Cost: " << minCost << "\n";
}

void primMST(int graph[V][V], int vertices) {
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < vertices; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < vertices - 1; count++) {
        int u = findMinKey(key, mstSet, vertices);
        mstSet[u] = true;

        for (int v = 0; v < vertices; v++) {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    printMST(parent, graph, vertices);
}

int main() {
    int vertices, edges;

    cout << "Enter the number of vertices: ";
    cin >> vertices;

    int graph[V][V] = {{0}};

    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < edges; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u][v] = weight;
        graph[v][u] = weight;
    }

    primMST(graph, vertices);

    return 0;
}
