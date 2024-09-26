#include <bits/stdc++.h>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> v{};
  for (int x = 0; x < N; x++) {
    int number;
    std::cin >> number;
    v.insert(v.begin() + x, number);
  }

  int total = 0;
  for (auto i : v) {
    if (i > 10) {
      int x = i - 10;
      total += x;
    } else {
      continue;
    }
  }

  std::cout << total;
  return 0;
}
