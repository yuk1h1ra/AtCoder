#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A == B) {
        cout << A + B << endl;
    } else {
        cout << max(A, B) * 2 - 1 << endl;
    }
}
