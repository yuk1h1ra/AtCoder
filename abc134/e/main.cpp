#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N) { cin >> a[i]; }

  vector<pair<int, int>> sortedNums(0);
  int beginIndex = 0;
  for (int i = 0; i < N - 1; i++) {
    if (a[i] >= a[i + 1]) {
      pair<int, int> num = make_pair(a[beginIndex], a[i]);
      beginIndex = i + 1;
      sortedNums.push_back(num);
    }
  }
  if (sortedNums[sortedNums.size() - 1].second < a[N - 1]) {
    sortedNums[sortedNums.size() - 1].second = a[N - 1];
  } else {
    pair<int, int> num = make_pair(a[N - 1], a[N - 1]);
    sortedNums.push_back(num);
  }

  int ansCnt = 0;
  while ((int)sortedNums.size() > 0) {
    ansCnt++;
    int maxNum = sortedNums[0].second;
    for (int i = 1; i < (int)sortedNums.size(); i++) {
      if (maxNum < sortedNums[i].first) {
        maxNum = sortedNums[i].second;
        sortedNums.erase(sortedNums.begin() + i);
        i--;
      }
    }
    sortedNums.erase(sortedNums.begin());
  }
  cout << ansCnt << endl;
}
