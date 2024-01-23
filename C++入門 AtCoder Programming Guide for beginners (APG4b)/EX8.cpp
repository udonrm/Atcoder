/*
https://atcoder.jp/contests/apg4b/tasks/APG4b_co
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1
  if (p == 1) {
    int price, N;
    cin >> price >> N;
    cout << N * price << endl;
  }

  // パターン2
  if (p == 2) {
    string text;
    int price, N;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << N * price << endl;
  }
}
