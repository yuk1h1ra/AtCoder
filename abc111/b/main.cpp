#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N; cin >> N;
  rep(i, 9) {
    if (N <= 111 * (i + 1)) {
      cout << 111 * (i + 1) << endl;
      return 0;
    }
  }
}
