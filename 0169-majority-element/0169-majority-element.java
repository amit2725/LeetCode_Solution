class Solution {
    public int majorityElement(int[] nums) {
        int prev = nums[0];
        int count =1;
        for(int i =1;i<nums.length;i++){
                if(count >0 && prev != nums[i])
                count--;
                else {
                    prev = nums[i];
                    count++;
                }
            
        }   
        return prev;     


    }
}