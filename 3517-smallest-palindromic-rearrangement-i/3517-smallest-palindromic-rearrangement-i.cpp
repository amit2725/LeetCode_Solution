class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>temp(26,0);
        string ans;
        int n=s.size();
        for(int i=0;i<s.size()/2;i++){
            temp[s[i]-'a']++;
        }
        for(int i=0;i<temp.size();i++){
            while(temp[i]--){
                ans.push_back('a'+i);
            }
        }
       if(n%2==1){
            ans.push_back(s[n/2]);
        }
        string left=ans.substr(0,n/2);
        reverse(left.begin(),left.end());
        ans=ans+left;
        return ans;

    }
};