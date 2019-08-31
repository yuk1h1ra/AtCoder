#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int A, B;
  cin >> A >> B;
  if (abs(A + B) % 2 == 0)
    cout << abs(A + B) / 2 << endl;
  else
    cout << "IMPOSSIBLE" << endl;
}
