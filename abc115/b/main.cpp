#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  int max_p = 0;
  long long sum_p = 0;
  for(int i = 0; i < N; i++) {
    int pi; cin >> pi;
    if(pi > max_p) {
      sum_p += max_p;
      max_p = pi;
    } else {
      sum_p += pi;
    }
  }
  sum_p += max_p / 2;
  cout << sum_p << endl;
}
