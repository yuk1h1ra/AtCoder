#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  string n; cin >> n;
  rep(i, (int)n.size()) {
    if (n[i] == '1')
      cout << "9";
    else if (n[i] == '9')
      cout << "1";
    else
      cout << n[i];
  }
  cout << endl;
}
