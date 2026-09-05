class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0 ) return false;
        int original = x;
        int temp =0;
    
        while( original > 0){
            int rem = original % 10 ;
            original = original / 10;
            temp = temp *10 + rem;
           // if(temp>INT_MAX || temp<INT_MIN) return false;

        }
        if(x == temp ) return true;
        return false;
    }
}