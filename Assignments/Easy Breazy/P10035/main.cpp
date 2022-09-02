// Paxton Proctor
// 4883 Programming Techniques
// 9/2/2022

#include <stdio.h>

// scan char[] or "String"
#define SCU(t,m) scanf("%llu %llu",&t ,&m)

// print
#define PFD(d) printf("%d carry operation.",d)
#define PF() printf("No carry operation.")

int main() {
  long long int n1,n2;
  int count, total;

  // get numbers till end of file
  while(SCU(n1,n2) != (n1 == 0 && n2 == 0)) {

    //
    while(n1){
      
    }

    // print number and carry operation
    if(count == 0){
      PF();
    }else{
      PFD(count);
    }
  }
  return 0;
}
