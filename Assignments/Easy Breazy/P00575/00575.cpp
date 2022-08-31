// Paxton Proctor
// 4883 Programming Techniques
// 8/31/2022

#include <stdio.h>
#include <math.h>
#include <string.h>

// scan char[] or "String"
#define SCS(t) scanf("%s",t)

// print integer newline
#define PFD(d) printf("%d\n",d)

// POW - 1
#define POW(i) (pow(2, i) - 1)

#define N 32

//  ./main < input1

// g++ -std=c++11 main.cpp -o main

using namespace std;

int main() {

  // declarations
  char T[N];
  uint tot, k, i;

  // loop till end of file strcmp gets elements of char[] and compares it to 0 to end program
  while(SCS(T), strcmp(T,"0") != 0) {
    
    // reset increments
    i = 0;
    tot = 0;
    
    	// loop each char and store the decimal in total
    	// strlen gets num of char[] elements and stores it in integer 10120 would be 5
	for(int k = strlen(T); k > 0; k--) {
      	// tot = tot + (ele - 0) * (2^n - 1)
      	// 48 is ascii code for 0 so you can also type '0' this allows us to convert every thing to integer.
      	tot += (T[i] - 48) * POW(k);
			i++;
    	}

    // print total
    PFD(tot);
  }
  return 0;
}
