class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++) nums[i]--;
        for(int i=0;i<n;i++){
            nums[nums[i]%n]+=n;
        }
        for(int i=0;i<n;i++){
            if(nums[i]/n==2){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};