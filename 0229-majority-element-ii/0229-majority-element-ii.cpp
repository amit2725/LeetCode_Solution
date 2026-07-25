class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int countA=0;
        int countB=0;
        int A=0;
        int B=0;
        int n=nums.size();
        vector<int>ans;
        for(int x:nums){
            if(x==A)
            countA++;
            else if(x==B)
            countB++;
            else if(countA==0){
                A=x;
                countA++;
            }
            else if(countB==0){
                B=x;
                countB++;
            }
            else{
                countA--;
                countB--;
            }

        }
        countA = 0;
        countB = 0;

        for (int x : nums) {
            if (x == A)
                countA++;
            else if (x == B)
                countB++;
        }
        if(countA>n/3) ans.push_back(A);
        
        if(countB>n/3) ans.push_back(B);
       
        return ans;
    }
};