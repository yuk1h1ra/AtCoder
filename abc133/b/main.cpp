#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, D; cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D));
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < D; j++) {
      cin >> X[i][j];
    }
  }

  int cnt = 0;
  for(int i = 0; i < N; i++) {
    for(int j = i+1; j < N; j++) {
      long long distance = 0;
      for(int k = 0; k < D; k++) {
        distance += pow(X[i][k] - X[j][k], 2);
      }
      long long sqrt_dist = sqrt(distance);
      if(distance == sqrt_dist * sqrt_dist) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}
