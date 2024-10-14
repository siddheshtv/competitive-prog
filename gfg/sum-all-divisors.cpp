class Solution {
public:
    long long sumOfDivisors(int N) {
        vector<long long> sums(N + 1, 0);
        
        for (int i = 1; i <= N; i++) {
            for (int j = i; j <= N; j += i) {
                sums[j] += i;
            }
        }
        
        long long totalSum = 0;
        for (int i = 1; i <= N; i++) {
            totalSum += sums[i];
        }
        
        return totalSum;
    }
};
