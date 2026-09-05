class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int prev = prices[n-1];
        int maxi =0;

        for(int i=n-1;i>=0;i--){
           
            int profit = prev - prices[i];
          
            maxi = maxi < profit ? profit : maxi;
            if(profit<0) prev = prices[i];

        }
        return maxi;
    }
}