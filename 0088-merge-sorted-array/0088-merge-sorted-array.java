class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int ans[] = new int[n+m];
        int i=0;
        int j=0;
        int k=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                ans[k]=nums2[j];
                j++;
            }
            else {ans[k]=nums1[i];
                    i++;}
            k++;
        }
        while(i<m){
            ans[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n){
            ans[k]=nums2[j];
            j++;
            k++;
        }
      for (int x = 0; x < n + m; x++) {
            nums1[x] = ans[x];
        }
    }
}