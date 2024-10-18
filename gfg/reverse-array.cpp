#include <iostream>
#include <vector>

std::vector<int> reverseArray(std::vector<int> &arr) {
  int start = 0;
  int end = arr.size() - 1;
  int swap;
  // Swap elements from the start and end, moving toward the center
  while (start < end) {
    swap = arr[start];
    arr[start] = arr[end];
    arr[end] = swap;

    start++;
    end--;
  }

  return arr;
}

int main() {
  std::vector<int> arr = {1, 2, 3, 4};

  // Reverse the array
  std::vector<int> reversedArr = reverseArray(arr);

  // Print the reversed array
  for (int num : reversedArr) {
    std::cout << num << " ";
  }

  return 0;
}
