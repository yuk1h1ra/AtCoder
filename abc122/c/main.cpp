#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;

  vector<int> acCnt(N + 1);
  rep(i, N) {
    int isAC = (S.substr(i, 2) == "AC" ? 1 : 0);
    acCnt[i + 1] = acCnt[i] + isAC;
  }

  rep(i, Q) {
    int l, r;
    cin >> l >> r;
    cout << acCnt[r - 1] - acCnt[l - 1] << endl;
  }
}
