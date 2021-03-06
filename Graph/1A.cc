// Recursive Depth First traversal of a graph.
#include <bits/stdc++.h>
using namespace std;

class graph {
    int v;
    // Adjacency list representation i.e. an array of lists.
    std::vector<std::list<int>> adj;
    void traverse(int v,bool visited []);
    public:
        graph(int num) : v(num), adj(num) {}
    	void addEdge(int v,int w);
    	void dfs();
};

void graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void graph::traverse(int v, bool visited []) {
	// Mark the current vertex as visited & print it.
	visited[v] = true;
	cout << v << ' ';
	// Traverse all the adjacent vertices to the current vertex.
	for (auto it = adj[v].begin(); it != adj[v].end(); ++it)
		if (visited[*it] == 0)
			traverse(*it, visited);
}

void graph::dfs() {
	// Create a boolean "visited" array of size V.
    bool *visited = new bool[v];
    // Mark all the vertices as not visited
    for (int i = 0; i < v; i++)
        visited[i] = false;
	// Call the recursive traverse function for each vertex.
    for (int i = 0; i < v; i++)
        if (visited[i] == false)
            traverse(i, visited);
}

int main() {
	graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	// Print DFS traversal.
	g.dfs();
	return 0;
}

/** Time Complexity: O(V+E) where V is number of vertices & E is number of edges.
 *
 *  Note: The above implementation does the complete graph traversal even if the
 *  nodes are unreachable (e.g. in a disconnected graph). To do so, traverse()
 *	must be called for every vertex. Also, before calling traverse(), we check
 *	if the current vertex was already printed by some other call of traverse().
 */
