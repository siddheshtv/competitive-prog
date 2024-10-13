class Solution {
public:
    int reverse(int x) {
        long reverse_number = 0;
        bool isNegative = x < 0;
        

        if (isNegative) x = abs(x);
        while(x != 0) {
            int last_digit;
            if (reverse_number > INT_MAX / 10 || (reverse_number == INT_MAX / 10 && last_digit > 7)) return 0;
            if (reverse_number < INT_MIN / 10 || (reverse_number == INT_MIN / 10 && last_digit < -8)) return 0;
            
            last_digit = x % 10;
            reverse_number = (reverse_number * 10) + last_digit;
            x = x / 10;
        }
        if (isNegative) return -reverse_number;
        else return reverse_number;
    }
};
