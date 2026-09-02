class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1;
        int suffix = 1;
        int n = nums.size();
        int maxi = -11;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                prefix=1;
                if(maxi<0) maxi =0;
                continue;
            }
            prefix = prefix * nums[i];
            maxi = max( maxi, prefix);
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==0){
                suffix = 1;
                if(maxi<0) maxi =0;
                continue;
            }
            suffix = suffix * nums[i];
            maxi = max(maxi,suffix);
        }
        
        return maxi;
    }
};