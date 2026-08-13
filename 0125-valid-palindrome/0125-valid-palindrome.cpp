class Solution {
public:
    bool isPalindrome(string s) {
        bool flag = 1;
        string temp;
        for(char c:s){
            if(isalnum(c)) temp.push_back(c);
        }
       
        int m=0;
        int n=temp.size()-1;
        while(m<=n){
            if(tolower(temp[m++])!=tolower(temp[n--])) flag=0;
        }
        return flag;
    }

};