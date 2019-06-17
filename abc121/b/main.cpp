#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M, C; cin >> N >> M >> C;
  vector<int> B(M);
  for(int i = 0; i < M; i++) {
    cin >> B[i];
  }

  int ansCnt = 0;
  for(int i = 0; i < N; i++) {
    long long multiABi = 0;

    for(int j = 0; j < M; j++) {
      int Aij; cin >> Aij;
      multiABi += Aij * B[j];
    }
    if(multiABi + C > 0) ansCnt++;
  }
  cout << ansCnt << endl;
}
