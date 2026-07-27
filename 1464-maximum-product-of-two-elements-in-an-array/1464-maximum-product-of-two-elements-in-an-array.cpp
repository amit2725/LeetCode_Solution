class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;
        for (int j = 0; j < nums.size() - 1; j++) {
            for (int i = j + 1; i < nums.size(); i++) {
                int mulit = (nums[i] - 1) * (nums[j] - 1);
                maxi=max(maxi,mulit);
            }
            
        }
        return maxi;
    }
};