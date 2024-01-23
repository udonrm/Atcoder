/*
https://atcoder.jp/contests/apg4b/tasks/APG4b_cn
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  x++;
  cout << x << endl;

  x *= (a + b);
  cout << x << endl;

  x *= x;
  cout << x << endl;

  x -= 1;
  cout << x << endl;
}