class Solution {
    public int maxSubArray(int[] nums) {
        int sum = 0;
        int ans = 0;
        int prev = 0;
        int maxi = Integer.MIN_VALUE;
        for (int x : nums) {
            sum = sum + x;
            maxi = Math.max(maxi, sum);
            if(sum<0) sum = 0;


        }
        return maxi;
    }
}