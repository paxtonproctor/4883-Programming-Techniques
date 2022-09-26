// Paxton Proctor
// 9/26/2022
// Programming Techniques

/* following code involves code from geeksforgeeks
  https://www.geeksforgeeks.org/bipartite-graph/
*/
#include <iostream>
#include <vector>
#include <queue>

#define PFB() printf("BICOLORABLE.\n")

#define PFNB() printf("NOT BICOLORABLE.\n")

#define SCD(a) scanf("%d",&a)

#define WHILE(a) while(SCD(a),a)

static const int_fast16_t BLUE = 0;
static const int_fast16_t RED = 1;
static const int_fast16_t WHITE = 2;

using namespace std;
 
// Driver program to test above function
int main()
{
  int a;
  
  WHILE(a) {
    vector<vector<int> > G(a);
    vector<int> color(a, WHITE);
    bool isBipartite = true;
    
    (isBipartite) ? PFB() : PFNB();
  }
  return 0;
}
