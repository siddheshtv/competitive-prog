#include <bits/stdc++.h>
using namespace std;

bool stringPalindrome(string &word) {
  int left = 0;
  int right = word.size() - 1;

  while (left < right) {
    if (word[left] != word[right]) {
      cout << "not palindrome";
      return false;
    }
    left++;
    right--;
  }

  cout << "palindrome";
  return true;
}

int main() {
  string word;
  cin >> word;
  stringPalindrome(word);
  return 0;
}
