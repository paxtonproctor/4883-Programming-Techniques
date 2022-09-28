// Paxton Proctor
// 9/28/2022
// Programming Techniques

#include <stdio.h>
#include <math.h>

#define SCDDD(a,b,c) scanf("%d %d %d",&a,&b,&c)

#define PFR() printf("right\n")

#define PFW() printf("wrong\n")

#define WHILE(a,b,c) while(!(a == 0 && b == 0 && c == 0))


int main(void) {
  int a,b,c;
  SCDDD(a, b, c);
  WHILE(a, b, c) {
    if (b == sqrt(pow(a,2) + pow(c,2)) || a == sqrt(pow(b,2) + pow(c,2)) || c == sqrt(pow(a,2) + pow(b,2)))
      PFR();
    else
      PFW();
    SCDDD(a, b, c);
  }
  return 0;
}
