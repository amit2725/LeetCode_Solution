class Solution {
public:

    int largestInteger(vector<int>& nums, int k) {
        vector<int>temp(51,0);
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        if(k==nums.size()) return ranges::max(nums);
        if(k==1){
            for(int i=0;i<temp.size();i++)
                if(temp[i]==1) ans=max(ans,i);
            return ans;
        }
        if(temp[nums[0]]==1) ans=max(ans,nums[0]);
        if(temp[nums[nums.size()-1]]==1) ans=max(ans,nums[nums.size()-1]);
        return ans; 
    }
};