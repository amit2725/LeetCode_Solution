class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = nums.size();
        vector<int> prefMax;
        vector<int> suffMin;
        for (int i = 0; i < n; i++) {

            maxi = max(nums[i], maxi);
            prefMax.push_back(maxi);

            mini = min(nums[n - i - 1], mini);
            suffMin.push_back(mini);
        }
        ranges::reverse(suffMin);
        for (int i = 0; i < n; i++) {
            if (k >= (prefMax[i] - suffMin[i]))
                return i;
        }
        return -1;
    }
};