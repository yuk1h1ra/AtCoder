#include <bits/stdc++.h>

using namespace std;

int func(int n) {
  return ((n % 2 == 0) ? n / 2 : 3 * n + 1);
}

int main() {
  int s; cin >> s;
  vector<int> v;
  v.push_back(s);
  for(int i = 1; i <= 1000000; i++) {
    int si = func(v.back());
    auto result = find(v.begin(), v.end(), si);
    if(result != v.end()) {
      cout << i + 1 << endl;
      return 0;
    } else {
      v.push_back(si);
    }
  }
}
