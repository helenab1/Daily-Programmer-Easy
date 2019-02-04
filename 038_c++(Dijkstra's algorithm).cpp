// Implementation for Dihkstra's SSSP (Single source shortest path) algorithm
// This is an optimized algorithm running in O(E*log(V))
// And I took this from Quora hoping to learn something because this question is much too hard for me now.

#include <iostream>
#include <queue>
#include <vector>
#include <climits>

using namespace std;

#define INF INT_MAX // Infinity (defines INF in the code as infinity(int max))

// Max possible number of verticles. Preallocating space for DataStructures accordingly
const int sz = 10001;
vector<pair<int, int>> a[sz];	// Adjacency list. (Weird way of writing vector, never seen pair.)
int dis[sz];	// Stores shortest distance
bool vis[sz] = { 0 };	// Determines whether node has been visited or not

// Algorith for SSSP
void Dijkstra(int source, int n) {

	for (int i = 0; i < sz; i++)	// Set initial distances to Infinity
		dis[i] = INF;

	// Custom comparator for determining priority for priority queue (shortest edge comes first)
	// He wrote this in one line and looks so odd to me idk how to fix it but I'm sure this formatting is bad.
	class prioritize {
	public: bool operator ()(pair<int, int>&p1, pair<int, int>&p2) { return p1.second > p2.second; }
	};

	priority_queue<pair<int, int>, vector<pair<int, int>>, prioritize > pq;	// Priority queue to store vertex, weight pairs
	pq.push(make_pair(source, dis[source] = 0));	// Pushing the source with distance from itself as 0
	while (!pq.empty()) {
		pair<int, int> curr = pq.top();	// Current vertex. The shortest distance for this has been found
		pq.pop();
		int cv = curr.first, cw = curr.second;	// 'cw' the final shortest distance for this vertex
		if (vis[cv])	// If the vertex is already visited, no point in exploring adjacent vertices
			continue;
		vis[cv] = true;
		for (int i = 0; i < a[cv].size(); i++)	// Iterating through all adjacent vertices
			// If this node is not visted and the current parent node dsitance+distance fro there to this node is shorter than the intial distance set to this node, update it
			if (!vis[a[cv][i].first] && a[cv][i].second + cw < dis[a[cv][i].first])
				pq.push(make_pair(a[cv][i].first, (dis[a[cv][i].first] = a[cv][i].second + cw)));	// Set the new distance and add priority queue
	}

}

// Driver function for Dijkstra SSSP
int main() {

	int n, m, x, y, w;	// Number of vertices and edges
	cout << "Enter number of vertices and edges in the graph\n";
	cin >> n >> m;

	cout << "Enter each x, y pair\n";	// *I had to add this I think it's what he meant

	for (int i = 0; i < m; i++) {	// Building graph
		cin >> x >> y >> w; // Vertex1, vertex2, weight of edge
		a[x].push_back(make_pair(y, w));
		a[y].push_back(make_pair(x, w));
	}

	cout << "Enter source for Dijkstra's SSSP algorithm\n";	// *Where you are starting from, it seems when I run it
	int source;
	cin >> source;
	Dijkstra(source, n);	// SSSP from source (also passing number of vertices as parameter)
	cout << "Source is: " << source << ". The shortest distance to every other vertex from here is: \n";

	for (int i = 1; i <= n; i++) { // Printing final shortest distances from source
		cout << "Vertex: " << i << " , Distance: ";
		dis[i] != INF ? cout << dis[i] << "\n" : cout << "-1\n";
	}

	system("pause");
	return 0;
}