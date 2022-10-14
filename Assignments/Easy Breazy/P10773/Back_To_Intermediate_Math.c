// Paxton Proctor
// 10/14/2022
// Programming Techniques

#include <math.h>
#include <stdio.h>

#define SCD(t) scanf("%d", &t)

#define SCFFF(d, v, u) scanf("%f %f %f", &d, &v, &u)

#define PFD(n) printf("Case %d: can't determine\n", ++n)
#define PFDF(n, a) printf("Case %d: %.3lf\n", ++n, a)

#define WHILE(t) while(t--)

#define IF(v,u) if(v >= u || u == 0 || v == 0)

int main(void) {
  int n = 0, t;
  float d, v, u, a, s1, s2;
  SCD(t);
  WHILE(t) {
    SCFFF(d, v, u);
    IF(v, u) {
      PFD(n);
    }
    s1 = d / u;
    s2 = d / sqrt(u * u - v * v);
    a = fabs(s1 - s2);
    PFDF(n, a);
  }
  return 0;
}
