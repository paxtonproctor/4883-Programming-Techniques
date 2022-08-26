/**
 * Paxton Proctor
 * 4883 Programming Techniques
 * 8/26/2022
 */
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
  // make sure that it is long long int otherwise uva will not accept it
  long long int B = 0, A = 0;

  while (cin >> A >> B) {
    if (A > B) {
      cout << A - B << endl;
    }
    else{
      cout << B - A << endl;
    }
  }
  return 0;
}
