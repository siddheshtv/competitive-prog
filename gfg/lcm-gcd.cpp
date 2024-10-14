class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd = 1;
        for (int i=min(A,B); i>=1; i--) {
            if (A % i == 0 && B % i == 0) {
                gcd = i;
                break;
            }
        }
        int lcm = (A * B) / gcd;
        vector<long long> gcdlcm;
        gcdlcm.push_back(lcm);
        gcdlcm.push_back(gcd);

        return gcdlcm;
    }
};
