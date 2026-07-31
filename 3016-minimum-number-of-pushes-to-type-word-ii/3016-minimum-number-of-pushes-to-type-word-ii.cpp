class Solution {
public:
    int minimumPushes(string word) {
        vector<int>ans(26);
        int total=0;
        for(char c : word){
            ans[c-'a']++;
        }
        sort(ans.rbegin(),ans.rend());
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=0){
                total=total+((i/8)+1)*ans[i];
            }
        }
        return total;
    }
};