#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  for (int x = a; x <= b; x++) {
    if (x > 1000 || x < 1) {
      std::cout << -1;
      return 0;
    }
    if (x % c == 0) {
      std::cout << x;
      return 0;
    } else {
      continue;
    }
  }
  std::cout << -1;
  return 0;
}
