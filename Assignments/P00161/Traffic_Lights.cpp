/* Paxton Proctor
   4883 Programming Techniques
   9/3/2022
*/
#include <algorithm>
#include <stdio.h>
#include <vector>

// scanf int macro
#define SCD(a) scanf("%d", &a)

// printf  int macro
#define PFD(s) printf("%02d:%02d:%02d\n", s / 3600, s % 3600 / 60, s % 60);

#define PFS() printf("Signals fail to synchronise in 5 hours\n")

// while  eof macro
#define WHILE(T) while (T > 0)

using namespace std;

int main() {

  int Time;
  SCD(Time);

  // loop till time is equal to zero
  WHILE(Time) {

    // create a series
    vector<int> SInt;

    // loop till time is equal to zero
    WHILE(Time) {
      SInt.push_back(Time);
      SCD(Time);
    }

    bool Sync = true;

    // Find the time at which all lights synchronize or fail.
    // Finds the smallest element in the range of our vector then multiply by 2.
    // and if it is less than and equal to 5 hours(which is 18000 seconds).
    for (int i = (*min_element(SInt.begin(), SInt.end())) * 2; i <= 18000;
         i++) {
      bool light_Green = true; // boolean for the green light.

      // Looping through our vector of integers.
      for (int j = 0; j < SInt.size(); j++) {
        // Let i be the waiting time for a light.
        // If (j % 2i) >= (i-5), then the light isn't green at time j.
        if (i % (SInt[j] * 2) >= (SInt[j]) - 5) {
          // The light is not green because the (Time % 2i)
          light_Green = false;
          // is not greater or equal to (i-5)
          break;
        }
      }

      // if We have a green light.
      if (light_Green)
      {
        Sync = false;
        PFD(i);
        break;
      }
    }

    if (Sync) {
      PFS();
    }

    SCD(Time);
    if (!Time) {
      SCD(Time);
    }
  }
}
