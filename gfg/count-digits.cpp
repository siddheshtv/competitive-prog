#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
      int num = N;
      int count = 0;
      
      while (num > 0) {
          int last_digit;
          last_digit = num % 10;
          num = num / 10;
          if (last_digit !=0 && N % last_digit == 0) count ++;
      }
      return count;

    }    
};

int main() {
	Solution sol;
	int N;
	cin >> N;
	sol.evenlyDivides(N);
	return 0;
}
