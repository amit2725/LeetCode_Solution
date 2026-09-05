class Solution {
    public int maxSubArray(int[] nums) {
        int sum = 0;
      
        int maxi = Integer.MIN_VALUE;
        for (int x : nums) {
            sum += x;
            maxi = maxi < sum ? sum : maxi;
            sum = sum < 0 ? 0: sum;


        }
        return maxi;
    }
}