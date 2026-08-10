class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || numRows >= s.size())
            return s;

        vector<vector<char>> temp(
            numRows,
            vector<char>(s.size(), '0')
        );

        int k = 0;

        for (int col = 0; k < s.size(); col++) {

            
            for (int row = 0; row < numRows && k < s.size(); row++) {
                temp[row][col] = s[k++];
            }

            
            for (int row = numRows - 2; row > 0 && k < s.size(); row--) {
                col++;
                temp[row][col] = s[k++];
            }
        }

        string ans = "";

        for (int row = 0; row < numRows; row++) {
            for (int col = 0; col < s.size(); col++) {
                if (temp[row][col] != '0')
                    ans += temp[row][col];
            }
        }

        return ans;
    }
};