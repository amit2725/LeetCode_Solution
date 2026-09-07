class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int count =0;
        for(int i =1;i<n-1;i++){
            if(prev == nums[i]) continue;
            else{
                    int j =i+1;
                    while( j>n && nums[i]==nums[j] ) j++;
                    if(j>n) break;
                    if(prev > nums[i] && nums[i]<nums[j]) {
                        count++;
                        prev=nums[i];
                        }
                    else if(prev<nums[i] && nums[i]>nums[j]){
                        count++;
                        prev = nums[i];
                    }
                }
            
        }
        return count;
    }
};