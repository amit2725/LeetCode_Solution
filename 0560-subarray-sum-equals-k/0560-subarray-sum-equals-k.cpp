class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count=0;
        mp[0] = 1;
        int sum = 0;
        // if (k == 0) {
        //     for (int x : nums) {
        //         sum = sum + x;
        //         mp[sum]++;
        //     }
        //     for (auto& x : mp) {
        //         if (x.second > 1)
        //             count = count + x.second-1;
        //     }
        //     return count;
        // }
        // else{
             for (int x : nums) {
                sum = sum + x;
                if(mp.find(sum-k)!=mp.end()){
                    count=count+mp[sum-k];
                }
                mp[sum]++;
            }
            
            return count;
       // }
        //return 0;
    }
};