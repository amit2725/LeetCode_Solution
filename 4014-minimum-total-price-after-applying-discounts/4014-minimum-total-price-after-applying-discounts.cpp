class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        ranges::sort(prices);
        ranges::sort(discounts);
        ranges::reverse(prices);
        ranges::reverse(discounts);
        int n=prices.size();
        int m=discounts.size();
        int i=0,j=0;
        double sum=0;
        while(i<n && j<m){
            double p=prices[i];
            double d=discounts[j];
            sum=sum+((p*(100-d))/100);
            i++;
            j++;
        }
        while(i<n){
            sum=sum+prices[i];
            i++;
        }
        return sum;
    }
};