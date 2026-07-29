class Solution {
public:
    bool judgeSquareSum(int c) {
        int nums = sqrt(c);
        double high=nums;
        double low = 0;
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