#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  string S;
  cin >> S;

  vector<int> nums;
  int tmp = 1;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == (char)('0' + tmp)) {
      cnt++;
    } else {
      nums.push_back(cnt);
      cnt = 1;
      tmp = 1 - tmp;
    }
  }
  if (cnt != 0)
    nums.push_back(cnt);
  if ((int)nums.size() % 2 == 0)
    nums.push_back(0);

  int maxNum = 0;
  for (int i = 0; i < (int)nums.size(); i += 2) {
    int tmp = 0;
    for (int j = 0; (j < K * 2 + 1) && (i + j < (int)nums.size()); j++) {
      tmp += (int)nums[i + j];
    }
    maxNum = max(maxNum, tmp);
  }

  cout << maxNum << endl;
}
