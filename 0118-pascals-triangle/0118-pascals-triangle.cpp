class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n = numRows;
        for (int i = 0; i < n; i++) {
            vector<int> temp(i + 1);
            temp[0] = 1;
            temp[i] = 1;
            if (i >= 2) {
                int j = 1;
                for (int k = 0; k < ans[i - 1].size() - 1; k++) {
                    temp[j] = ans[i - 1][k] + ans[i - 1][k + 1];
                    j++;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};