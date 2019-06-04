#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;
    S[K-1] = S[K-1] + 32;
    cout << S << endl;
}
