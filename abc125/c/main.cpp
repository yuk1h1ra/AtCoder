#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (a <= b) {
    int box = a;
    a = b;
    b = box;
  }
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  int N;
  cin >> N;

  // わかりずらいので、indexを１スタートにする
  vector<int> A(N + 2);
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  A[0] = A[1];
  A[N + 1] = A[N];

  vector<pair<int, int>> gcdA(N + 1);
  for (int i = 1; i <= N; i++) {
    gcdA[i].first = gcd(A[i], gcdA[i - 1].first);
    gcdA[N + 1 - i].second = gcd(A[N + 1 - i], gcdA[N + 2 - i].second);
  }
  gcdA[0].first = gcdA[2].second;
  gcdA[N + 1].second = gcdA[N - 1].first;

  int maxGcd = 0;
  for (int i = 1; i <= N; i++) {
    int indexGcd = gcd(gcdA[i - 1].first, gcdA[i + 1].second);
    maxGcd = max(indexGcd, maxGcd);
  }

  cout << maxGcd << endl;
}
