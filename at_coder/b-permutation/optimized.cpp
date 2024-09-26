#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;

  std::vector<bool> seen(N + 1, false);

  for (int i = 0; i < N; ++i) {
    int x;
    std::cin >> x;

    if (x < 1 || x > N || seen[x]) {
      std::cout << "No\n";
      return 0;
    }

    seen[x] = true;
  }

  std::cout << "Yes\n";
  return 0;
}
