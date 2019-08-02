#include <bits/stdc++.h>

using namespace std;

int N, A, B, C;
int l[1001];

int dfs(int cur, int a, int b, int c) {
  if (cur == N) {
    if (min({a, b, c}) > 0)
      return abs(a - A) + abs(b - B) + abs(c - C) - 30;
    else
      return pow(10, 9);
  }
  int useA = dfs(cur + 1, a + l[cur], b, c) + 10;
  int useB = dfs(cur + 1, a, b + l[cur], c) + 10;
  int useC = dfs(cur + 1, a, b, c + l[cur]) + 10;
  int notUse = dfs(cur + 1, a, b, c);
  return min({useA, useB, useC, notUse});
}

int main() {
  cin >> N >> A >> B >> C;
  for (int i = 0; i < N; i++) {
    cin >> l[i];
  }
  cout << dfs(0, 0, 0, 0) << endl;
}
