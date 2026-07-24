class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int maxi = -1;
        for (int x : arr) {
            mp[x]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if(it->first==it->second){
                maxi=max(it->first,maxi);
            }
        }
        return maxi;
    }
};