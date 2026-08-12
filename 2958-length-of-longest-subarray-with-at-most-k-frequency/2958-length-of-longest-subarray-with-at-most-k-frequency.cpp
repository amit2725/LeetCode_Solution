class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int j = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            ++mp[nums[i]];
            while (mp[nums[i]] == k + 1) {
                mp[nums[j++]]--;
            }
            count = max(i - j+1, count);
        }
        return count;
    }
};