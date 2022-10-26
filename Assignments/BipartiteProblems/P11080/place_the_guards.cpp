// Paxton Proctor
// Programming Techniques
// 10/26/2022
// https://www.geeksforgeeks.org/bipartite-graph/

#include <bits/stdc++.h>
#include <queue>
#include <vector>

#define SCD(t) scanf("%d", &t)

#define SCDDA(a,b) scanf("%d %d", &a, &b)
#define SCDDV(v,e) scanf("%d %d", &v, &e)

#define FOR(i,V) for(int i = 0; i < V; i++)

#define FORI(i,e) for(int i = 0; i < e; i++)


using namespace std;

int Bipartite(int V, vector<int> adj[]) {
  // vector to store colour of vertex
  // assigning all to -1 i.e. uncoloured
  // colours are either 0 or 1
  // for understanding take 0 as red and 1 as blue
  int numGuards;
  
  vector<int> col(V, -1);

  // queue for BFS storing {vertex , colour}
  queue<pair<int, int>> q;

  numGuards = 0;

  // loop incase graph is not connected
  FOR(i,V) {

    int count[2] = {0};
    // if not coloured
    if (col[i] == -1) {

      // colouring with 0 i.e. red
      q.push({i, 0});
      col[i] = 0;
      ++count[col[i]];

      while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        // current vertex
        int v = p.first;
        // colour of current vertex
        int c = p.second;

        // find vertices connected to current vertex
        for (auto it = begin(adj[v]); it != end(adj[v]); ++it) {
          int j = *it;

          // impossible (-1) if a self loop
          if (col[j] == c)
            return -1;

          // color[j] was not assigned a color
          if (col[j] == -1) {
            // coloring with opposite color to that of parent
            if (c)
              col[j] = 0;
            else
              col[j] = 1;

            ++count[col[j]];
            q.push({j, col[j]});
          }
        }
      }
      // increment numGuards counter with the minimum number of guards needed in the subgraph
      numGuards += max(1, min(count[0], count[1]));
    }
  }
  // graph is bipartite so return total number of guards needed
  return numGuards;
}

int main() {

  int T, v, e, f, t;
  
  SCD(T);

  while (T--) {
    SCDDV(v,e);// v vertex e edges

    vector<int> adj[v]; // Create adjacency vector

    FORI(i, e) {
      SCDDA(f,t); // add f and t to adjacency vector
      adj[f].push_back(t);
      adj[t].push_back(f);
    }

    cout << Bipartite(v, adj) << '\n';
  }
}
