// Paxton Proctor
// 9/23/2022
// programming techniques

#include <stdio.h>
#include <string.h>

#define SCD1(a) scanf("%d",&a)

#define SCD2(b) scanf("%d",&b)

#define SCS(str) scanf("%s",&str)

#define WHILE(a) while(a != 0)

#define IFELSE(str) if(!strcmp(str, "donate")) { SCD2(b); total += b; } else{ PFD(total); }

#define PFD(total) printf("%d\n",total)


int main(void) {
  int a,b,total=0;
  char str[20];

  SCD1(a);

  WHILE(a) {
    
    SCS(str);
    
    IFELSE(str)
    
    a--;
  }
  
  return 0;
}
