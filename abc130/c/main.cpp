#include <bits/stdc++.h>

using namespace std;

int main() {
    int W, H, x, y;
    cin >> W >> H >> x >> y;

    float max_area = W * H / 2.0;
    cout << max_area << " ";
    if((W / 2.0 == x) && (H / 2.0 == y)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
}
