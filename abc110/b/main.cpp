#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  int maxX = X;
  rep(i, N) {
    int x;
    cin >> x;
    maxX = max(maxX, x);
  }

  int minY = Y;
  rep(i, M) {
    int y;
    cin >> y;
    minY = min(minY, y);
  }
  if (maxX < minY)
    cout << "No ";
  cout << "War" << endl;
}
