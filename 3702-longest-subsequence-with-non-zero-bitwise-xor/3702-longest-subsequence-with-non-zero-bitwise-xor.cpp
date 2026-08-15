class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       int temp=0;
       long long sum=0;
       for(int x : nums){
        temp=temp^x;
        sum=sum+x;
       }
       if(sum==0) return 0;

       if(!temp) return nums.size()-1;
       return nums.size();
    }
};