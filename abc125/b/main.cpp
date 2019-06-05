#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N), C(N);

    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }
    int max = 0;
    for(int i = 0; i < N; i++) {
        if(V[i] - C[i] > 0) {
            max = max + V[i] - C[i];
        }
    }
    cout << max << endl;
}
