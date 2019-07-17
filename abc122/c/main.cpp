#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N, Q; cin >> N >> Q;
  string S; cin >> S;

  vector<int> ac(0);
  for(int i = 0; i < (int)S.size(); i++) {
    i = (int)S.find("AC", i);
    if (i == -1) break;
    ac.push_back(i+1);
  }

  rep(i, Q) {
    int l, r; cin >> l >> r;
    int acl, acr;
    rep(j, (int)ac.size()) {
      if (ac[j] >= l) {
        acl = j;
        break;
      }
    }
    for(int j = (int)ac.size() - 1; j >= 0; j--) {
      if (ac[j] < r) {
        acr = j;
        break;
      }
    }
    cout << (int)(acr - acl + 1) << endl;
  }

}
