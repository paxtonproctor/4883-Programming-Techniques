// Paxton Proctor
// 4883 Programming Techniques
// 8/26/2022

#include <iomanip>
#include <iostream>
#include <map>
#include <string>

#define SCD(t) scanf("%d\n\n", &t)
#define endl "\n"

//  ./main < input1

// g++ -std=c++11 main.cpp -o main

using namespace std;

int main() {
  // map counts the amount of times a cetain string pops up
  map<string, int> treeCount;

  int T;
  double count;
  string tree;

  // supposed to be faster
  SCD(T);

  // clear the spaces
  getline(cin, tree);
  
  // eof
  while (T--) {

    getline(cin, tree);
    
    if (tree.size()) {
      count++;
      // if string is the same insert it into map
      if (treeCount.find(tree) == treeCount.end()) {
        treeCount.insert(pair<string, int>(tree, 0));
      }

      // there might be a faster way
      treeCount[tree]++;
      
    } else {
      for (auto itr = treeCount.cbegin(); itr != treeCount.cend(); ++itr) {
        // %s for string followed by %denote.fourdecimal places long doouble and new line
        printf("%s %.4lf\n", (*itr).first.data(),
          (double) (*itr).second / (double) count * 100.0);
      }
    }
    
    printf("\n");
    treeCount.clear();
    count = 0;
  }
  return 0;
}
