// Breadth First traversal of a graph.
#include <bits/stdc++.h>
using namespace std;

class graph {
    int v;
    std::vector<std::list<int>> adj;
    void traverse(int v,bool visited []);
    public:
        graph(int num) : v(num), adj(num) {}
    	void addEdge(int v,int w);
    	void bfs();
};

void graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void graph::traverse(int s, bool visited []) {
    queue<int> q;
    // Mark the current node as visited and enqueue it.
    visited[s] = true;
    q.push(s);
    while(!q.empty()) {
        // Dequeue the front element and print it
        s = q.front();
        cout << s << " ";
        q.pop();
        // Go through all the adjacent vertices of dequeued
        // vertex one by one and if it has not been visited,
        // then mark it visited and enqueue it.
        for(auto it = adj[s].begin(); it != adj[s].end(); ++it) {
            if(!visited[*it]) {
                visited[*it] = true;
                q.push(*it);
            }
        }
	}
}

void graph::bfs() {
    bool *visited = new bool[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
	// Call Util to print bFS traversal from each vertex.
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
	// Print BFS traversal.
	g.bfs();
	return 0;
}
// Time Complexity: O(V+E)
// Space Complexity (Queue): O(2V) ~O(V)
