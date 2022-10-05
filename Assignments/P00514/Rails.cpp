// Paxton Proctor
// 4883 Programming Techniques
// 9/2/2022
#include <stack>
#include <stdio.h>

using namespace std;

// Define Some Functions
#define FOR(i, a, b) for (int i = a; i <= b; i++)

// scan
#define SCD(N) scanf("%d", &N)

// print
#define PF1() printf("Yes\n")
#define PF2() printf("No\n")

// stack
stack<int> railCar;

int main() {

  int N, c, j;

  // scan till eof
  while (SCD(N) != EOF) {
    if (N == 0) {
      break;
    }
    while (1) {
      // pop cart size on to stack
      while (railCar.size() > 0) {
        railCar.pop();
      }

      j = 0;
      // as long as the increment is less than the number of cars
      for (int i = 0; i < N; i++) {
        // read in the carts
        SCD(c);

        // if cart is zero break
        if (c == 0) {
          printf("\n");
          return 0;
        } else {
          while (j < N && j != c) {
            if (railCar.size() > 0 && railCar.top() == c) {
              
            }
            j++;
            railCar.push(j);
          }

          // pop the top, hopefully there will be no railcars left
          if (railCar.top() == c) {
            railCar.pop();
          }
        }
      }

      // if the size is zero then that meanse the cars can be put in order
      // otherwise it can't be done.
      if (railCar.size() == 0) {
        PF1();
      } else {
        PF2();
      }
    }
  }

  // print new line for presentation
  printf("\n");
  return 0;
}
