#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N;
  cin >> N;
  vector<int> a(N + 1, 0);
  rep(i, N) { cin >> a[i + 1]; }

  vector<int> box(N + 1, 0);
  for (int i = N; i > 0; i--) {
    int cnt = 0;
    for (int j = i; j <= N; j += i) {
      cnt += box[j];
    }
    if ((cnt % 2) != a[i]) {
      box[i] = 1;
    }
  }

  cout << count(box.begin(), box.end(), 1) << endl;
  for (int i = 1; i <= N; i++) {
    if (box[i] == 1) {
      cout << i << " ";
    }
  }
  cout << endl;
}
