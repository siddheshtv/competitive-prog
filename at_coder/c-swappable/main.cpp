#include <iostream>
#include <set>
#include <utility>
#include <vector>

int main() {
  std::vector<int> v{};

  int N;
  std::cin >> N;
  for (int x = 0; x < N; x++) {
    int i;
    std::cin >> i;
    v.insert(v.begin() + x, i);
  }

  std::set<std::pair<int, int>> a;
  for (auto i : v) {
    for (auto j : v) {
      if (i != j) {

        if (a.find(std::make_pair(i, j)) == a.end()) {
          a.insert(std::make_pair(i, j));
        }
      }
    }
  }

  std::cout << a.size();

  return 0;
}
