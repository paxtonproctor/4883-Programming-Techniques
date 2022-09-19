// Paxton Proctor
// Programming Techniques 4883
// 9/7/2022
// ran between 0.010 and 0.000

#include <stdio.h>

// scanf int macro
#define SCD(a,b) scanf("%d %d", &a, &b)

// printf  int macro
#define PFD(a,b) printf("%d\n", 2 * a * b);

// while  eof macro
#define WHILE(a,b) while (SCD(a,b) != EOF)

int main() {
  int a,b;
  WHILE(a,b){
    PFD(a,b);
  }
}
