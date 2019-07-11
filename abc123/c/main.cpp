#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  ll N, A, B, C, D, E;
  cin >> N >> A >> B >> C >> D >> E;

  ll minNum = min({A, B, C, D, E});
  ll quotient = N / minNum;
  if (N % minNum != 0)
    quotient++;
  cout << 4 + quotient << endl;
}
