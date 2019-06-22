#include <bits/stdc++.h>

int main() {
  long long A, B, C, D; std::cin >> A >> B >> C >> D;

  long long cntDivC = (B / C) - (A / C) + 1;
  long long cntDivD = (B / D) - (A / D) + 1;
  long long cntDivCD = (B / lcmCD) - (A / lcmCD) + 1;

  std::cout << (B - A) - (cntDivC + cntDivD - cntDivCD) << std::endl;
}
