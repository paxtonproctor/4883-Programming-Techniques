// Paxton Proctor
// 10/5/2022
// Programming Techniques

#include <stdio.h>

#define SCD(t) scanf("%d", &t)

#define SCDD(a,b) scanf("%d %d",&a,&b)

#define PFD(a,b) printf("%d\n", (a/3)*(b/3))

#define WHILE(t) while(t--)

int main(void) {
  int t,a,b;

  SCD(t);
	WHILE(t) {
    SCDD(a, b);
    PFD(a, b);
  }
  return 0;
}
