#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    string str;
    cin >> str;

    bool flag = true;
    int cnt = 0;
    while(flag) {
        flag = false;
        int find_abc = str.find("ABC");
        if (find_abc == string::npos) {
            break;
        } else {
            swap(str[find_abc], str[find_abc+1]);
            swap(str[find_abc+1], str[find_abc+2]);
            cnt++;
            flag = true;
        }
    }
    cout << cnt << endl;
}
