#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n, a, b, c, d;
    string str;
    cin >> n >> a >> b >> c >> d;
    cin >> str;

    str[a-1] = 'a';
    str[b-1] = 'b';

    bool loop_flg = true;
    while(loop_flg) {
        loop_flg = false;

        if (a == c && b == d) {
            cout << "Yes" << endl;
            return 0;
        }
        if (a < c) {
            if (str[a] == '.') {
                swap(str[a-1], str[a]);
                a++;
                loop_flg = true;
                continue;
            }
        }
        if (b < d) {
            if (str[b] == '.') {
                swap(str[b-1], str[b]);
                b++;
                loop_flg = true;
                continue;
            }
        }
        if (a < c) {
            if (str[a+1] == '.' && a+2 <= c) {
                swap(str[a-1], str[a+1]);
                a += 2;
                loop_flg = true;
                continue;
            }
        }
        if (b < d) {
            if (str[b+1] == '.' && b+2 <= d) {
                swap(str[b-1], str[b+1]);
                b += 2;
                loop_flg = true;
                continue;
            }
        }
    }

    cout << "No" << endl;
}
