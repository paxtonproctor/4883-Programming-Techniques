// Paxton Proctor
// Programming Techniques 4883
// 9/16/2022

#include <stdio.h>

// scanf int macro
#define SCD(n) scanf("%d", &n)
#define SCLLU(a, b) scanf("%llu %llu", &a, &b)

// printf  int macro
#define PFD(n, sum) printf("Case %d: %llu\n", n, sum);

// while  eof macro
#define WHILETC(n) while (n--)

// while a <= b take the modulo till sum is odd.
#define WHILELC(a, b) while (a <= b)

typedef unsigned long long int ULLI;

int main() {
  int Num;
  int caseNum = 1;

  // get the case number
  SCD(Num);

  WHILETC(Num) {
    ULLI a, b;
    ULLI sum = 0;

    SCLLU(a, b);

    WHILELC(a, b) {
      
      if (a % 2 == 1) {
        sum += a;
      }
      
      a++;
    }
    
    PFD(caseNum, sum);
    caseNum++;
  }
  return 0;
}
