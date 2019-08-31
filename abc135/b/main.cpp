#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N;
  cin >> N;
  int cnt = 0;
  rep(i, N) {
    int p;
    cin >> p;
    if (p != i + 1)
      cnt++;
  }
  if (cnt <= 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
