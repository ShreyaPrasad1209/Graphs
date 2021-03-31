// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<vector<int>>& adj, int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<vector<int>>& adj)
{
	for (int v = 0; v < adj.size(); ++v)
	{
		cout << "\n Adjacency list of vertex " << v << "\n head ";
		for (auto x : adj[v])
		{
		    cout << "-> " << x;
		}
	
		cout<<endl;
	}
}

// Driver code
int main()
{
    
	vector<vector<int>>adj(5,vector<int>());
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj);
	return 0;
}
