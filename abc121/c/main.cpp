#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<ll, int>> price_number(N);
  rep(i, N) {
    ll A;
    cin >> A;
    int B;
    cin >> B;
    price_number[i] = make_pair(A, B);
  }

  sort(price_number.begin(), price_number.end());

  int m = M;
  ll sumPrice = 0;
  rep(i, N) {
    if (m >= price_number[i].second) {
      m -= price_number[i].second;
      sumPrice += price_number[i].first * price_number[i].second;
    } else {
      sumPrice += price_number[i].first * m;
      break;
    }
  }
  cout << sumPrice << endl;
}
