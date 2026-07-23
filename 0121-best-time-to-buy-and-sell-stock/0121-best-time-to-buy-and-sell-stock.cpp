class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxi=0;
        
        int n=prices.size();
        int prev=prices[n-1];
        for(int i=n-1;i>=0;i--){
            int profit=prev-prices[i];
            maxi=max(maxi,profit);
            if(profit<0){
                prev=prices[i];
            }
        }
        return maxi;

    }
};