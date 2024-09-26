#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  if (a + 1 == b || b + 1 == a || (a == 10 && b == 1) || (b == 10 && a == 1)) {
    std::cout << "Yes";
  } else {
    std::cout << "No";
  }

  return 0;
}
