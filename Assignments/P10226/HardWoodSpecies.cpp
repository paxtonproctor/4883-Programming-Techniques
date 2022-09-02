// Paxton Proctor
// 4883 Programming Techniques
// 8/26/2022

#include <iostream>
#include <map>
#include <string>

// print integer new line new line
#define SCD(t) scanf("%d", &t)

// created a macro for a auto for loop
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)

using namespace std;

int main() {
  // map counts the amount of times a cetain string pops up
  map<string, int> treeCount;

  // declarations
  int T;
  string tree;

  //cin >> T;
  SCD(T);

  // reads the 1 and the space
  //getline(cin, tree);
  //getline(cin, tree);
  cin.ignore();
  cin.ignore();

  while (T > 0) {
    
    int count = 0;

    while (getline(cin, tree)) {
      // if a space is hit break the while loop
      if (tree == "") {
        break;
      }

      // count the iterator
      count++;

      // count the number of each tree
      treeCount[tree]++;
    }

    // from beginning of file to end will print the trees and there avg
    FOREACH(itr, treeCount){
      printf("%s %.4lf\n", (*itr).first.data(),
             (double)(*itr).second / (double)count * 100.0);
    }

    // decrement
    T--;

    if (T > 0) {
      printf("\n");
      treeCount.clear();
    }
  }
  return 0;
}
