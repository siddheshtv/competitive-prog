#include <bits/stdc++.h>
#include <vector>

int main() {
  std::vector<int> v{};
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int x;
    std::cin >> x;
    v.insert(v.begin() + i, x);
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < N; i++) {
    if (v[i] != i + 1) {
      std::cout << "No";
      return 0;
    }
  }
  std::cout << "Yes";
  return 0;
}
