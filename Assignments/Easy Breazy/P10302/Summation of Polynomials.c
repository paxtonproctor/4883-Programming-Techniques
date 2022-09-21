// Paxton Proctor
// 9/21/2022
// Programming Techniques
#include <stdio.h>

#define SCLLD(a) scanf("%lld",&a)

#define PFLLD(b) printf("%lld\n",b)

#define WHILEEOF(a) while(SCLLD(a) != EOF)

#define WHILE(c) while(c>0)

typedef long long int ll;

int main(void) {

  ll a = 0;

  WHILEEOF(a){
    ll b = 0;
    WHILE(a){
      b += a * a * a;
      a--;
    }
    PFLLD(b);
  }
  
  return 0;
}
