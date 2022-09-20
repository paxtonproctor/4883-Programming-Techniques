#include <stdio.h>
#include <string.h>

// scanf int macro
#define SCD(n) scanf("%d", &n)

#define SCS(str) scanf("%s", &str)

// printf macro
#define PFD3() printf("3\n");
#define PFD2() printf("2\n");
#define PFD1() printf("1\n");

// for  eof macro
#define FOR(i, n) for (int(i) = 0; (i) < (n); (i)++)

int main() {

  // read in number of words
  int n, l, u;
  char s[100];
  SCD(n);

  // eof
  FOR(i, n) {

    SCS(s);

    if (strlen(s) == 5) {
      PFD3();
    } else {
      if (s[0] == 111 && s[1] == 110 || s[0] == 111 && s[2] == 101 ||
          s[1] == 110 && s[2] == 101) {
        PFD1();
      } else {
        PFD2();
      }
    }
  }

  return 0;
}
