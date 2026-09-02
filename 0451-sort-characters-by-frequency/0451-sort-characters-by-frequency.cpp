class Solution {
public:
    string frequencySort(string s) {

        vector<pair<int, char>> temp;

        vector<int> freq(128, 0);

        // Frequency count
        for(char c : s) {
            freq[c]++;
        }

        // Character + frequency store
        for(int i = 0; i < 128; i++) {
            if(freq[i] > 0) {
                temp.push_back({freq[i], char(i)});
            }
        }

        // Sort according to frequency
        sort(temp.begin(), temp.end(), greater<pair<int, char>>());

        // Make answer
        string ans = "";

        for(auto p : temp) {
            ans.append(p.first, p.second);
        }

        return ans;
    }
};