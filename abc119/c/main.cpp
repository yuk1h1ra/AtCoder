#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, A, B, C;
  cin >> N >> A >> B >> C;
  vector<int> l;
  for (int i = 0; i < N; i++) {
    int li;
    cin >> li;
    l.push_back(li);
  }
  sort(l.begin(), l.end(), greater<int>());

  int ansCnt = 0;
  // A
  int nearAIndex = 0;
  for (int i = 1; i < N; i++) {
    if (abs(l[nearAIndex] - A) > abs(l[i] - A)) {
    }
  }
}
