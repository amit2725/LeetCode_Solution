class Solution {
public:
    bool judgeSquareSum(int c) {
        long long high = sqrt(c);
        long long low = 0;
        while (low <= high) {
            if ((low * low) + (high * high) == c) {
                return true;
            } else if ((low * low) + (high * high) > c) {
                high--;
            } else
                low++;
        }

        return false;
    }
};