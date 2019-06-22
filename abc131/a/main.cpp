#include <bits/stdc++.h>

using namespace std;

int main() {
  string S; cin >> S;
  for(int i = 0; i < (int)S.size() - 1; i++) {
    if(S[i] == S[i+1]) {
      cout << "Bad" << endl;
      return 0;
    }
  }
  cout << "Good" << endl;
}
