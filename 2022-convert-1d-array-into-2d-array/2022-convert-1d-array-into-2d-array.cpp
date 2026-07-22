class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      
        if(m*n!=original.size()) return {};
        int k=0;
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i=0;i<m && k<original.size();i++){
            for(int j=0;j<n && k<original.size();j++){
                ans[i][j]=original[k++];
            }
        }
        return ans;
    }
};