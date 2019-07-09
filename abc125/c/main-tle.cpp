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

  vector<int> a_gcd(N);

  // a_gcd[0]を求める
  int a1_temp = A[1];
  for (int i = 1; i < N; i++) {
    a1_temp = gcd(A[i], a1_temp);
  }
  a_gcd[0] = a1_temp;

  // a_gcd[1:]を求める
  for (int i = 1; i < N; i++) {
    int temp = A[0];
    for (int j = 1; j < N; j++) {
      if (i == j)
        continue;
      temp = gcd(A[j], temp);
    }
    a_gcd[i] = temp;
  }

  vector<int>::iterator iter = max_element(a_gcd.begin(), a_gcd.end());
  int index = distance(a_gcd.begin(), iter);
  cout << a_gcd[index] << endl;
}
