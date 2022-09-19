/**
 * Paxton Proctor
 * 4883 Programming Techniques
 * 9/2/2022
 * IMPROVED
 */
#include <stdio.h>

// all of this makes the speed by .020
// scanf  long long int macro
#define SCLLD(a,b) scanf("%lld %lld", &a, &b)

// printf long long int macro
#define PFLLD(a,b) printf("%lld\n", a - b)

#define PFD(b,a) printf("%lld\n", b - a)

// while  eof macro
#define WHILE(a,b) while(SCLLD(a,b) == 2)

// if macro
#define IF(a,b) if(a>b) { PFLLD(a,b); } else { PFD(b,a); }

// oddly enough the macro for a full line is actually slower by .01 not sure how to get it to runtime of .000
//#define EV(a,b) while(SCLLD(a,b) == 2) { IF(a, b) }

typedef long long int ll;

int main() {
  ll B = 0, A = 0;

  //EV(A,B);
  
  WHILE(A,B){
    IF(A, B);
  }
  
  return 0;
}
