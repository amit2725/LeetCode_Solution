class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int maxi=0;
        for(auto x: nums){
            if(x==0){
                sum=0;
            }
            else{
                sum=sum+x;
                maxi=max(sum,maxi);
            }
        }
        return maxi;
    }
};