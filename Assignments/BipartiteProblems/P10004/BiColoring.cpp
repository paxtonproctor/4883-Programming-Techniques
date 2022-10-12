// Paxton Proctor
// 9/26/2022
// Programming Techniques

/* following code involves code from geeksforgeeks
  https://www.geeksforgeeks.org/bipartite-graph/
*/

#include <iostream>
#include <queue>
#include <vector>

// scan test cases
#define SCDT(t) scanf("%d", &t)

// scan edges
#define SCDE(e) scanf("%d", &e)

// scan points
#define SCDD(a, b) scanf("%d %d", &a, &b)

#define PFY() printf("BICOLORABLE.\n")
#define PFN() printf("NOT BICOLORABLE.\n")

#define WHILEEOF(t) while (SCDT(t) && t != 0)

#define FOR(i, l) for (int i=0 ; i<l ; i++)

using namespace std;

bool isBipartite(vector<vector<bool>> Graph, int src, int V) {
  // Create a color array to store colors
  // assigned to all vertices. Vertex
  // number is used as index in this array.
  // The value '-1' of colorArr[i]
  // is used to indicate that no color
  // is assigned to vertex 'i'. The value 1
  // is used to indicate first color
  // is assigned and value 0 indicates
  // second color is assigned.
  vector<int> colorArr(V);
  for (int i = 0; i < V; ++i)
    colorArr[i] = -1;

  // Assign first color to source
  colorArr[src] = 1;

  // Create a queue (FIFO) of vertex
  // numbers and enqueue source vertex
  // for BFS traversal
  queue<int> q;
  q.push(src);

  // Run while there are vertices
  // in queue (Similar to BFS)
  while (!q.empty()) {
    // Dequeue a vertex from queue ( Refer http://goo.gl/35oz8 )
    int u = q.front();
    q.pop();

    // Return false if there is a self-loop
    if (Graph[u][u] == 1)
      return false;

    // Find all non-colored adjacent vertices
    for (int v = 0; v < V; ++v) {
      // An edge from u to v exists and
      // destination v is not colored
      if (Graph[u][v] && colorArr[v] == -1) {
        // Assign alternate color to this adjacent v of u
        colorArr[v] = 1 - colorArr[u];
        q.push(v);
      }

      // An edge from u to v exists and destination
      // v is colored with same color as u
      else if (Graph[u][v] && colorArr[v] == colorArr[u])
        return false;
    }
  }

  // If we reach here, then all adjacent
  // vertices can be colored with alternate color
  return true;
}

// Driver program to test above function
int main() {
  int t,a,b,l;
  vector<vector<bool>> Graph;
  WHILEEOF(t) {
    Graph.resize(t, vector<bool>(t));
    SCDE(l);
    FOR(i,l) {
    SCDD(a, b);

    Graph[a][b] = 1;
    Graph[b][a] = 1;
    }
    isBipartite(Graph, 0, Graph.size()) ? PFY() : PFN();
    Graph.clear();
  }
  return 0;
}
