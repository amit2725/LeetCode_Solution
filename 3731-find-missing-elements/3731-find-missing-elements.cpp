class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
      
        int n=0;
        ranges::sort(nums);
        int mini=nums[0];
        while(n!=nums.size()){
            if(mini==nums[n]){
                n++;
                mini++;
            }
            else{
                ans.push_back(mini);
                mini++;
            }
        }
        return ans;
            
        


        
    }
};