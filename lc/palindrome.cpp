class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long long reverse_number = 0;
        while (num > 0) {
            int last_digit = num % 10;
            num = num / 10;
            reverse_number = (reverse_number * 10) + last_digit;
        }

        if (reverse_number == x) return true;
        
        return false;
    }
};
