#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1, 0);
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  vector<int> left(N + 2, 0);
  vector<int> right(N + 2, 0);

  for (int i = 1; i <= N; i++) {
    left[i] = max(A[i], left[i - 1]);
  }
  for (int i = N; i >= 0; i--) {
    right[i] = max(A[i], right[i + 1]);
  }

  for (int i = 1; i <= N; i++) {
    cout << max(left[i - 1], right[i + 1]) << endl;
  }
}
