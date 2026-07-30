class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int k = (m + n) / 2;
        int i = 0;  int j = 0;  int prev = 0, curr = 0;
        
        while (k >= 0) {
            prev = curr;
            if(i==m) curr = nums2[j++];
            else if(j==n) curr = nums1[i++];
            else if (nums1[i] < nums2[j])
                curr = nums1[i++];
            else
                curr = nums2[j++];
            k--;
        }

        if ((m + n) % 2 == 0) {
            return (curr + prev) / 2.0;
        }
        return curr;
    }
};