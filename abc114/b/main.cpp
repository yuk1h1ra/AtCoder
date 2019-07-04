#include <bits/stdc++.h>

using namespace std;

int main() {
  string S; cin >> S;
  int ansNum = 1000;
  for(int i = 0; i < (int)S.size() - 2; i++) {
    ansNum = min(ansNum, abs(stoi(S.substr(i, 3)) - 753));
  }
  cout << ansNum << endl;
}
