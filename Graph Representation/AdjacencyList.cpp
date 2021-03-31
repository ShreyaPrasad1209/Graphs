#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void displayAdjList( vector<list<int>>& adj_list) {
  for(int i = 0; i<adj_list.size(); i++) {
     cout << i << "--->";
     list<int> :: iterator it;
     for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
        cout << *it << " ";
     }
     cout << endl;
   }
}

void add_edge(list<int> adj_list[], int u, int v) {   //add v into the list u, and u into list v
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}
int main() {
   int v = 6;      //there are 6 vertices in the graph
   //create an array of lists whose size is 6
   //   list<int> adj_list[v];
   
   vector<list<int>>adj_list(6, list<int>());
   
   add_edge(adj_list, 0, 4);
   add_edge(adj_list, 0, 3);
   add_edge(adj_list, 1, 2);
   add_edge(adj_list, 1, 4);
   add_edge(adj_list, 1, 5);
   add_edge(adj_list, 2, 3);
   add_edge(adj_list, 2, 5);
   add_edge(adj_list, 5, 3);
   add_edge(adj_list, 5, 4);
   displayAdjList(adj_list);
   
   return 0;
}
