#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    for(int i = 0; i < N; i++) {
        for(int j = N; j > i; j--) {
            long sum = accumulate(a.begin() + i, a.begin() + j, 0);
            if(sum >= K) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
