#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  string S;
  cin >> S;

  int cnt0 = count(S.begin(), S.end(), '0');
  int cnt1 = count(S.begin(), S.end(), '1');
  cout << min(cnt0, cnt1) * 2 << endl;
}
