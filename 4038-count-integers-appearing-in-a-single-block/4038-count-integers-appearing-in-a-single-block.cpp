class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        vector<int> seen(101, 0);
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(seen[nums[i]]==-1) continue;

            if(i > 0 && nums[i] != nums[i-1] && seen[nums[i]] !=0 ) {

                
                    //count++;
                    seen[nums[i]]=-1;
                }
            
            else seen[nums[i]]++;
        }
        for(int x:seen){
            if(x>0) count++;
        }

        return count;
    }
};