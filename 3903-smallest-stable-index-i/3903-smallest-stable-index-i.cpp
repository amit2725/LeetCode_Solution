class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans2 = -1;
        int temp = k;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int maxi = *max_element(nums.begin(), nums.begin() + i + 1);
            int mini = *min_element(nums.begin() + i, nums.end());
            int diff = maxi - mini;
            if(diff<=k){
                return i;
            }
        }
            return ans2;
        }
    };