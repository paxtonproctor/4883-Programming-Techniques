// Paxton Proctor
// 10/5/2022
// Programming Techniques

#include <stdio.h>

// scan
#define SCD(t) scanf("%d", &t)
#define SCDD(a, b) scanf("%d %d", &a, &b)

// for
#define FOR(i, t) for (int i = 1; i <= t; i++)

// print
#define PFLT() printf("<\n")
#define PFGT() printf(">\n")
#define PFE() printf("=\n")

int main(void) {
  // declarations
  int t, a, b;
  
  SCD(t);
  
  FOR(i, t) {
    
    SCDD(a, b);
    
    if (a < b)
      PFLT();
    if (a > b)
      PFGT();
    if (a == b)
      PFE();
    
  }
  return 0;
}
