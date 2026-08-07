class Solution {
public:
    string decode(int& i, string& s) {
        int nums = 0;
        string ans="";
       
        while (i < s.size()) {
            if (isdigit(s[i])) {
                nums = nums * 10 + (s[i] - '0');
                i++;

            } else if (s[i] == '[') {
                i++;
                string st = decode(i, s);
                for (int j = 0; j < nums; j++) {
                   
                    ans = ans + st;
                }
                nums=0;
            } else if (isalpha(s[i])) {
                ans.push_back(s[i]);
                i++;
            } else if (s[i] == ']') {
                i++;
               return ans;
            }
        }
        return ans;
    }

    string decodeString(string s) {
        int i = 0;
        return decode(i, s);
    }
};