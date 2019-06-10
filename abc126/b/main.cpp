#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int num = stoi(S);

    int prev = num / 100;
    int next = num % 100;

    if((prev > 0 && prev <= 12) && (next > 0 && next <= 12)) {
        cout << "AMBIGUOUS" << endl;
    } else if(prev > 0 && prev <= 12) {
        cout << "MMYY" << endl;
    } else if(next > 0 && next <= 12) {
        cout << "YYMM" << endl;
    } else {
        cout << "NA" << endl;
    }
}
