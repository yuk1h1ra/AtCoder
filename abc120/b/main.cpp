#include <bits/stdc++.h>

using namespace std;

int main() {
  int A, B, K; cin >> A >> B >> K;
  vector<int> commonDivisors;

  for(int i = 1; i <= 100; i++) {
    if((A % i == 0) && (B % i == 0)) {
      commonDivisors.push_back(i);
    }
  }
  cout << commonDivisors.at(commonDivisors.size() - K) << endl;
}
