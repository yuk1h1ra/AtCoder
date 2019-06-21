#include <bits/stdc++.h>

using namespace std;

int main() {
  string S; cin >> S;
  int maxLen = 0;
  int local = 0;
  for(int i = 0; i < (int)S.size(); i++){
    ((S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') ? local++ : local = 0);
    maxLen = max(maxLen, local);
  }
  cout << maxLen << endl;
}
