class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0,k=0;
        vector<int>ans(m+n);
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                ans[k++]=nums2[j++];
            }
            else ans[k++]=nums1[i++];
        }
        while(i<m){
            ans[k++]=nums1[i++];
        }
        while(j<n){
            ans[k++]=nums2[j++];
        }
        if((m+n)%2==0){
            return (ans[k/2]+ans[(k/2)-1])/2.0;
        }
        else return ans[k/2];
    }
};