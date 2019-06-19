#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, A, B, C; cin >> N >> A >> B >> C;
  vector<int> l;
  bool aCheck = true, bCheck = true, cCheck = true;
  for(int i = 0; i < N; i++) {
    int li; cin >> li;
    if(aCheck && li == A) aCheck = false;
    else if(bCheck && li == B) bCheck = false;
    else if(cCheck && li == C) cCheck = false;
    else l.push_back(li);
  }
  sort(l.begin(), l.end(), greater<int>());

  // debug
  cout << N << " " << A << " " << B << " " << C;
  cout << endl;
  cout << aCheck << " " << bCheck << " " << cCheck << endl;
  for(auto li: l) cout << li << " ";
  cout << endl;
}
