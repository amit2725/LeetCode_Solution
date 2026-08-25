class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>temp(200,0);
        for(int i=0;i<temp.size();i++){
            temp[i]=i*k;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
               temp[nums[i]/k]=0;
            }
        }
        for(int i=1;i<temp.size();i++){
            if(temp[i]!=0) return temp[i];
        }
        return 0;
    }
};