#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M; cin >> N >> M;
  vector<int> A(M, 0);
  for(int n = 0; n < N; n++) {
    int K; cin >> K;
    for(int k = 0; k < K; k++) {
      int a; cin >> a;
      A[a-1]++;
    }
  }
  int cnt = count(A.begin(), A.end(), N);
  cout << cnt << endl;
}
