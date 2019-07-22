#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int dp[101][4][4][4];

int main() {
  int N;
  cin >> N;
  int mod = int(1e9) + 7;

  dp[0][3][3][3] = 1;

  rep(len, N) rep(c3, 4) rep(c2, 4) rep(c1, 4) {
    if (dp[len][c3][c2][c1] == 0)
      continue;
    rep(add, 4) {
      if (c2 == 0 && c1 == 1 && add == 2)
        continue;
      if (c2 == 1 && c1 == 0 && add == 2)
        continue;
      if (c2 == 0 && c1 == 2 && add == 1)
        continue;
      if (c3 == 0 && c1 == 1 && add == 2)
        continue;
      if (c3 == 0 && c2 == 1 && add == 2)
        continue;

      dp[len + 1][c2][c1][add] += dp[len][c3][c2][c1];
      dp[len + 1][c2][c1][add] %= mod;
    }
  }

  int ans = 0;
  rep(c3, 4) rep(c2, 4) rep(c1, 4) {
    ans += dp[N][c3][c2][c1];
    ans %= mod;
  }
  cout << ans << endl;
}
