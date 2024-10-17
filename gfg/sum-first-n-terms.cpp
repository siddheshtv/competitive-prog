//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
public:
  long long sum = 0;
  long long count = 1;
  long long sumOfSeries(long long n) {

    if (count > n) {
      return sum;
    }
    sum = sum + pow(count, 3);
    count++;
    sumOfSeries(n);

    return sum;
  }
};

//{ Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long N;
    cin >> N;
    Solution ob;
    cout << ob.sumOfSeries(N) << "\n";
  }
}
// } Driver Code Ends
