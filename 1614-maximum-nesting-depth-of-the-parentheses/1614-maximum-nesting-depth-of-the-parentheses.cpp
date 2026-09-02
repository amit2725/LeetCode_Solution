class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int i=0;
        int maxi=0;
        int count=0;
        while(i<s.size()){
            if(s[i]=='('){
                st.push('(');
                count++;
                maxi=max(maxi,count);
            }
            else if(s[i]==')'){
                st.pop();
                count--;
                maxi=max(maxi,count);
            }
            i++;
        }
        return maxi;
    }
};