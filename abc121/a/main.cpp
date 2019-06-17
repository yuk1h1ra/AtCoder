#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W; cin >> H >> W;
  int h, w; cin >> h >> w;
  int allWhite = H * W;
  int allBlack = (h * W) + ((H - h) * w);
  cout << allWhite - allBlack << endl;
}
