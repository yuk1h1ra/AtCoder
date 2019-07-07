#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  vector<long long> dam(N, 0);

  // これだと山に降った量になっている
  for(int i = 1; i <= N; i++) {
    int Ai; cin >> Ai;
    dam[i-1] += Ai / 2;
    dam[i%N] += Ai / 2;
  }
  for(int i = 0; i < N; i++) {
    cout << dam[i];
  }
  cout << endl;
}
