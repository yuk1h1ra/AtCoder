#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    vector<string> splited_v;
    getline(S, splited_v, '1');

    cout << N << K << endl;
    cout << S << endl;
    cout << splited_v << endl;

}
