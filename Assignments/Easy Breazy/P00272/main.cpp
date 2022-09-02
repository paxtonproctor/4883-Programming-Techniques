// Paxton Proctor
// 4883 Programming Techniques
// 9/2/2022

#include <stdio.h>

// scan char
#define SCS(t) scanf("%c", &t)

// print characters
#define PFB() printf("``")
#define PFR() printf("''")
#define PFC() printf("%c", t)

int main() {
  // declarations
  char t;
  long int count;

  // read characters till end of file
  while (SCS(t) != EOF) {
    // ascii "" is 34
    if (t == 34) {
      // continually count and get the remainder
      count++;
      // odd
      if (count % 2 == 1) {
        PFB();
      // even
      } else {
        PFR();
      }
    }else{
      PFC();
    }
  }

  return 0;
}
