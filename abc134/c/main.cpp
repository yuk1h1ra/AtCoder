#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  int maxNum = 0;
  rep(i, N) {
    cin >> A[i];
    maxNum = max(A[i], maxNum);
  }

  int countMax = count(A.begin(), A.end(), maxNum);
  if (countMax != 1) {
    rep(i, N) { cout << maxNum << endl; }
    return 0;
  }

  int nextNum = 0;
  rep(i, N) {
    if (A[i] != maxNum)
      nextNum = max(A[i], nextNum);
  }
  rep(i, N) {
    if (A[i] == maxNum)
      cout << nextNum << endl;
    else
      cout << maxNum << endl;
  }
}
