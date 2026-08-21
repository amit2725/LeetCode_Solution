class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) nums[i]=-1;
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum =0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.count(sum)){
                ans=max(ans,i-mp[sum]);
            }
            else mp[sum]=i;

        }

      return ans;

    }
};







        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int one =0; 
        //     int zero =0;
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]==1) one++;
        //         else zero++;
        //         if(zero==one) ans=max(ans,j-i+1);
        //     }
        // }
        // return ans;
    