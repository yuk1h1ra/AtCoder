#include <bits/stdc++.h>

using namespace std;

int main() {
  string S; cin >> S;
  sort(S.begin(), S.end());
  cout << ((S[0] == S[1] && S[1] != S[2] && S[2] == S[3]) ? "Yes" : "No") << endl;
}
