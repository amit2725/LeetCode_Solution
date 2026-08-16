class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string ans;
        int i=0;
        while(i<s.size()){
            if(s[i]=='*') st.pop();
            else st.push(s[i]);
            i++;
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        ranges:: reverse(ans);
        return ans;
    }
};