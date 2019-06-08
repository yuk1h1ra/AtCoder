#include <iostream>

using namespace std;

int main() {
    int dishes[5];
    for(int i = 0; i < 5; i++) {
        cin >> dishes[i];
    }

    // 下一桁が0でない且つなるべく小さい料理を探す
    // その料理を最後に提供する
    int last_order_index = -1;
    for(int i = 0; i < 5; i++) {
        int last_digit = dishes[i] % 10;
        if(last_digit != 0) {
            if(last_order_index == -1) {
                last_order_index = i;
            } else {
                if((dishes[last_order_index] % 10) > last_digit) {
                    last_order_index = i;
                }
            }
        }
    }

    // 結果足し算
    int min_order_time = 0;
    for(int i = 0; i < 5; i++) {
        if(last_order_index != i) {
            min_order_time += dishes[i];
            if(dishes[i] % 10 != 0) {
                min_order_time += 10 - (dishes[i] % 10);
            }
        }
    }
    if(last_order_index != -1) {
        min_order_time += dishes[last_order_index];
    }

    cout << min_order_time << endl;
}
