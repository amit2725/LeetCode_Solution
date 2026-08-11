class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        unordered_map<int,int>mp;
        for(int x:nums) mp[x]++;
      
        for(int i=1;i<nums.size();i++){
            if(nums[i]==(nums[i-1]+1))
                sum=sum+nums[i]; 
            else break;
        }
        while(true){
            if(mp.find(sum)!=mp.end()) sum++;
            else break;
        }
        return sum;
    }
};