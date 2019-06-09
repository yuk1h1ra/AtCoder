#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int element_cnt) {
    if(element_cnt == 1) {
        return 1;
    } else if(element_cnt == 2) {
        return 1;
    }
    return fibonacci(element_cnt - 1) + fibonacci(element_cnt - 2);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(M);
    for(int i = 0; i < M; i++) {
        cin >> a[i];
    }

    long sum_num = fibonacci(a[0]);
    for(int i = 1; i < M; i++) {
        int tmp = (a[i] - a[i-1]);
        if(tmp == 1) {
            cout << 0 << endl;
            return 0;
        }
        sum_num *= fibonacci(tmp - 1);
    }
    sum_num *= fibonacci(N - a[M-1]);

    cout << sum_num % 1000000007 << endl;
}
