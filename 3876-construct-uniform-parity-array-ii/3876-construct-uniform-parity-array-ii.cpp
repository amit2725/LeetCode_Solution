class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int miniodd = INT_MAX;
        int minieven = INT_MAX;

        for (int x : nums1) 
            if (x % 2 != 0) miniodd = min(miniodd, x);           
        
        for(int x: nums1)
            if(x % 2 == 0) minieven =min(minieven,x);
        if(minieven == INT_MAX) return 1;

        
        if (miniodd == INT_MAX) return 1; 

        if(minieven-miniodd<=0) return 0;
        return 1;
    }
};