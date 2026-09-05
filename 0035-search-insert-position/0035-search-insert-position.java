class Solution {
    public int searchInsert(int[] nums, int target) {
        int start = 0;
        int n = nums.length;
        int ans=0;
        int end = n - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target) {
                ans = mid + 1;
                start = mid + 1;

            } else {
                ans = mid;
                end = mid - 1;

            }
        }
        return ans;
    }
}