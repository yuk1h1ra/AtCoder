#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  vector<pair<long long int, long long int>> tasks;
  for(int i = 0; i < N; i++) {
    long long int a, b; cin >> a >> b;
    tasks.push_back(make_pair(b, a));
  }
  sort(tasks.begin(), tasks.end());

  long long times = 0;
  for(auto task: tasks) {
    times += task.second;
    if(times > task.first) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
