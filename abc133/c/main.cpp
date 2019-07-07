#include <bits/stdc++.h>

using namespace std;

int main() {
  long long L, R; cin >> L >> R;
  long long minNum = 2019;

  for(int i = L; i <= R; i++) {
    if(i % 2019 == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  for(long long i = L; i <= R; i++) {
    for(long long j = i+1; j <=R; j++) {
      minNum = min(minNum, ((i * j) % 2019));
    }
  }
  cout << minNum << endl;
}
