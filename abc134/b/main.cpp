#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N, D;
  cin >> N >> D;
  int ans = 0;
  ans = N / (D * 2 + 1);
  if (N % (D * 2 + 1) != 0)
    ans += 1;
  cout << ans << endl;
}
