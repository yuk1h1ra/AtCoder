#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  int T, A; cin >> T >> A;
  
  int ansIndex = 1;
  int ansH; cin >> ansH;
  for(int i = 2; i <= N; i++) {
    int Hi; cin >> Hi;
    if(abs(A - (T - ansH * 0.006)) > abs(A - (T - Hi * 0.006))) {
      ansIndex = i;
      ansH = Hi;
    }
  }
  cout << ansIndex << endl;
}
