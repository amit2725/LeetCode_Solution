class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int j = 0;
        int ones = 0;
        int mini = INT_MAX;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '1')
                ones++;

            // Remove leading zeroes
            while (j <= i && s[j] == '0')
                j++;

            // We have exactly k ones
            if (ones == k) {

                // Current window length
                int len = i - j + 1;

                if (len < mini) {
                    mini = len;
                    ans = s.substr(j, len);
                }
                else if (len == mini) {
                    ans = min(ans, s.substr(j, len));
                }

                // Move past the first 1
                ones--;
                j++;
            }
        }

        return ans;
    }
};