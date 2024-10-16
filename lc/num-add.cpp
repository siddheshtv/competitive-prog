#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
using namespace std;

int printSum(string word) {
  int sum = 0;
  for (char c : word) {
    if (isdigit(c)) {
      sum += (c - '0');
    } else {
      continue;
    }
  }
  return sum;
}

int main() {

  string s;
  cin >> s;
  int result = printSum(s);
  cout << result;
  return 0;
}
