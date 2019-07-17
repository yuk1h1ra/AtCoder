#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N, T; cin >> N >> T;
  int minC = 10000;
  rep(i, N) {
    int c, t; cin >> c >> t;
    if (t > T) continue;
    minC = min(minC, c);
  }
  if (minC == 10000) {
    cout << "TLE" << endl;
  } else {
    cout << minC << endl;
  }
}
