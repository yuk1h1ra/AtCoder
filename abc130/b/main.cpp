#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    int sum_meter = 0;
    int bounce_cnt = 1;
    for(int i = 0; i < N; i++) {
        int bounce;
        cin >> bounce;
        sum_meter += bounce;
        if(sum_meter <= X) {
            bounce_cnt++;
        } else {
            break;
        }
    }
    cout << bounce_cnt << endl;
}
