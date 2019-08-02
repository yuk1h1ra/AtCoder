#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  ll A, B, Q;
  cin >> A >> B >> Q;

  vector<pair<ll, ll>> sPair;
  rep(i, A) {
    ll s;
    cin >> s;
    sPair.push_back(make_pair(s, 10e10));
  }
  vector<pair<ll, ll>> tPair;
  rep(i, B) {
    ll t;
    cin >> t;
    tPair.push_back(make_pair(t, 10e10));
  }

  // second
  rep(i, A) {
    rep(j, B) {
      ll defference = abs(sPair[i].first - tPair[j].first);
      if (sPair[i].second > defference)
        sPair[i].second = defference;
      else
        break;
    }
  }
  rep(i, B) {
    rep(j, A) {
      ll defference = abs(tPair[i].first - sPair[j].first);
      if (tPair[i].second > defference)
        tPair[i].second = defference;
      else
        break;
    }
  }

  // Q
  rep(i, Q) {
    ll x;
    cin >> x;

    ll sMin = 20e10;
    rep(j, A) {
      ll defference = abs(sPair[j].first - x) + sPair[j].second;
      if (sMin > defference)
        sMin = defference;
      else
        break;
    }

    ll tMin = 20e10;
    rep(j, B) {
      ll defference = abs(tPair[j].first - x) + tPair[j].second;
      if (tMin > defference)
        tMin = defference;
      else
        break;
    }
    cout << min(sMin, tMin) << endl;
  }
}
