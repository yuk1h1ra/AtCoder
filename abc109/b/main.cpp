#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(a) cout << #a << ": " << a << endl;

int main() {
  int N;
  cin >> N;
  vector<string> words(0);
  string word;
  cin >> word;
  words.push_back(word);
  string prevWord = word;
  rep(i, N - 1) {
    cin >> word;
    if ((int)word[0] - (int)prevWord[(int)prevWord.size() - 1] != 0) {
      cout << "No" << endl;
      return 0;
    }
    if (find(words.begin(), words.end(), word) != words.end()) {
      cout << "No" << endl;
      return 0;
    }
    words.push_back(word);
    prevWord = word;
  }
  cout << "Yes" << endl;
}
