#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  int sumL = 0;
  int maxL = 0;
  for(int i = 0; i < N; i++){
    int l; cin >> l;
    if(maxL < l) {
      sumL += maxL;
      maxL = l;
    } else {
      sumL += l;
    }
  }
  cout << ((maxL < sumL) ? "Yes" : "No") << endl;
}
