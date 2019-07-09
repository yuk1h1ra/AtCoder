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

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> left(N + 1, 0);
  vector<int> right(N + 1, 0);
  for (int i = 0; i < N; i++) {
    left[i + 1] = gcd(left[i], A[i]);
  }
  for (int i = N - 1; i >= 0; i--) {
    right[i] = gcd(right[i + 1], A[i]);
  }

  int maxGcd = 0;
  for (int i = 0; i < N; i++) {
    int l = left[i];
    int r = right[i + 1];

    maxGcd = max(maxGcd, gcd(l, r));
  }
  cout << maxGcd << endl;
}
