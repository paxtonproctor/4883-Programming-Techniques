// Paxton Proctor
// 9/19/2022
// Programming Techniques

#include <stdio.h>
#include <string.h>

// scan a string
#define SCS(str) scanf("%s", &str)

// printf  int macro
#define PFD(n, s) printf("%d %s\n", n, s);


// while till * is read
#define WHILE(str) while (SCS(str) && strcmp(str,"*"))

int main() {
  char str[5];
  int cs = 1;
  WHILE(str) {
    if(!strcmp(str,"Hajj")) printf("Case %d: Hajj-e-Akbar\n", cs);
    else printf("Case %d: Hajj-e-Asghar\n", cs);
    cs++;
  }
}
