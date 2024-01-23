/*
https://atcoder.jp/contests/apg4b/tasks/APG4b_cl
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // 初期値をAに設定
  int sum = A;

  for(int i = 0; i < N; i++){
    string op;
    int B;
    cin >> op >> B;

    if(op == "+"){
      sum += B;
    }else if(op == "-"){
      sum -= B;
    }else if(op == "*"){
      sum *= B;
    }else if(op == "/" && B != 0){
      sum /= B;
    }else{
      cout << "error" << endl;
      // エラーを吐いた場合は強制終了
      break;
    }

    cout << i + 1 << ":" << sum << endl;
  }
}