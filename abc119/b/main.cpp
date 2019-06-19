#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  static double BTC_JPY = 380000.0;
  double sumPrice = 0;
  for(int i = 0; i < N; i++) {
    double x; string u;
    cin >> x >> u;
    sumPrice += ((u == "JPY") ? x : x * BTC_JPY);
  }
  cout << sumPrice << endl;
}
