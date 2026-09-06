class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        for (auto& x : mp) {
            if (x.second == 1) {
                if (mp.find(x.first + 1) == mp.end() &&
                    mp.find(x.first - 1) == mp.end()) {
                    ans.push_back(x.first);
                }
            }
        }
        return ans;
    }
};