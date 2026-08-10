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
        string ans;

        for (int i = 0; k < s.size(); i++) {

            if (i % (numRows - 1) == 0) {

                for (int j = 0; j < numRows && k < s.size(); j++) {
                    temp[j][i] = s[k++];
                }

            }
            else {

                for (int j = 0; j < numRows; j++) {

                    if (j == numRows - 1 - (i % (numRows - 1))) {
                        temp[j][i] = s[k++];
                        //break;
                    }
                }
            }
        }

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < s.size(); j++) {

                if (temp[i][j] != '0') {
                    ans.push_back(temp[i][j]);
                }

            }
        }

        return ans;
    }
};