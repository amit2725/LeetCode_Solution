class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        int i=0;
        for(;i<n;i++){
            if(i != nums[i]) return i;
        }
        return i;
    }
}