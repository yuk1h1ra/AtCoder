#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> W(N);
    for(int i = 0; i < N; i++) {
        cin >> W[i];
    }

    int min_abs = 100000;
    for(int T = 0; T < N; T++) {
        int s1 = 0;
        int s2 = 0;
        for(int i = 0; i < N; i++) {
            if(i < T) {
                s1 += W[i];
            } else {
                s2 += W[i];
            }
        }
        int num = abs(s1 - s2);
        if(num < min_abs) {
            min_abs = num;
        }
    }
    cout << min_abs << endl;
}
