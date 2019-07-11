#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int X, Y, Z, K;
  cin >> X >> Y >> Z >> K;

  vector<ll> A(X);
  rep(i, X) { cin >> A[i]; }
  sort(A.begin(), A.end(), greater<ll>());
  vector<ll> B(X);
  rep(i, Y) { cin >> B[i]; }
  sort(B.begin(), B.end(), greater<ll>());
  vector<ll> C(X);
  rep(i, Z) { cin >> C[i]; }
  sort(C.begin(), C.end(), greater<ll>());

  vector<ll> AB;
  rep(x, X) rep(y, Y) { AB.push_back(A[x] + B[y]); }
  sort(AB.begin(), AB.end(), greater<ll>());
  vector<ll> ABC;
  rep(xy, min(K, (int)AB.size())) rep(z, Z) { ABC.push_back(AB[xy] + C[z]); }
  sort(ABC.begin(), ABC.end(), greater<ll>());

  for (int i = 0; i < (int)ABC.size() && i < K; i++) {
    cout << ABC[i] << endl;
  }
}
