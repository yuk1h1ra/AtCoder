#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int zero_start_cnt = 0;
    int one_start_cnt = 0;
    for(int i = 0; i < S.size(); i++) {
        if(i % 2 == 0) { // 偶数indexの場合
            if(S[i] != '0'){ // 0ではないとき
                zero_start_cnt++;
            } else {
                one_start_cnt++;
            }
        } else { // 奇数indexの場合
            if(S[i] != '1'){ // 1ではないとき
                zero_start_cnt++;
            } else {
                one_start_cnt++;
            }
        }
    }
    cout << min(zero_start_cnt, one_start_cnt) << endl;
}
