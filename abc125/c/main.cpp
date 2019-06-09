#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<vector<int>> a_divisor(N);
    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            if(i != j) {
                cout << gcd(A[i], A[j]);
            }
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < a_divisor[i].size(); j++) {
            cout << a_divisor[i][j];
        }
        cout << endl;
    }
}
