#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  string S;
  cin >> S;

  int cnt = 0;
  while ((int)S.size() != 0) {
    int find01 = S.find("01");
    int find10 = S.find("10");
    if (find01 == -1 && find10 == -1) {
      break;
    } else {
      if (find01 == -1) {
        S.erase(find10, 2);
      } else if (find10 == -1) {
        S.erase(find01, 2);
      } else {
        S.erase(min(find01, find10), 2);
      }
      cnt += 1;
    }
  }
  cout << cnt * 2 << endl;
}
