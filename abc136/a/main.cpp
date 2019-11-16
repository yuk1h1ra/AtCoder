#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  cout << max((C - A + B), 0) << endl;
}
