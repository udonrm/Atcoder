/*
https://atcoder.jp/contests/apg4b/tasks/APG4b_ck
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int sum = 1;
  for(int i = 0; i < S.length(); i++){
    if(S.at(i) == '+'){
      sum += 1;
    }else if(S.at(i) == '-'){
      sum -= 1;
    }
  }
  cout << sum << endl;
}
