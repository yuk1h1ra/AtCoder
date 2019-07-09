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
}
