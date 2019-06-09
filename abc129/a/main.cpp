#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;

    int max_num = max({P, Q, R});
    int result = P + Q + R - max_num;
    cout << result << endl;
}
