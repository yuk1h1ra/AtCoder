#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1);
  rep(i, N + 1) { cin >> A[i]; }
  vector<int> B(N);
  rep(i, N) { cin >> B[i]; }

  ll cnt = 0;
  rep(i, N) {
    if (A[i] >= B[i]) {
      cnt += B[i];
    } else {
      int newA = A[i + 1] - (B[i] - A[i]);
      if (newA >= 0) {
        cnt += B[i];
        A[i + 1] = newA;
      } else {
        cnt += A[i];
        cnt += A[i + 1];
        A[i + 1] = 0;
      }
    }
  }
  cout << cnt << endl;
}
