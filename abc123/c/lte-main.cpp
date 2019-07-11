#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  ll N;
  cin >> N;
  vector<ll> time(5);
  rep(i, 5) { cin >> time[i]; }

  vector<ll> city = {N, 0, 0, 0, 0, 0};

  ll cnt = 0;
  while (true) {
    cnt++;
    for (int i = 5; i > 0; i--) {
      ll move = 0;
      if (city[i - 1] < time[i - 1]) {
        move = city[i - 1];
      } else {
        move = time[i - 1];
      }
      city[i] += move;
      city[i - 1] -= move;
    }
    if (city[0] == 0 && city[1] == 0 && city[2] == 0 && city[3] == 0 &&
        city[4] == 0 && city[5] == N) {
      break;
    }
  }
  cout << cnt << endl;
}
