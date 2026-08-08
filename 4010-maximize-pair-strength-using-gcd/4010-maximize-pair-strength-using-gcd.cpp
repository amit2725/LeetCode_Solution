class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    long long a=nums[i];
                    long long b=nums[j];
                    long long temp = gcd(a, b);
                    
                    maxi = max(maxi, (a*b) / (temp * temp));
                }
            }
        }
        return maxi;
    }
};