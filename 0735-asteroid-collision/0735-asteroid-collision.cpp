class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        
        for(auto x : asteroids){
            bool a = true;
            while(!st.empty() && x < 0 && st.top() > 0){
                if(abs(st.top()) > abs(x)){
                    a = false;
                    break;
                }
                else if(abs(st.top()) == abs(x)){
                    st.pop();
                    a=false;
                    break;
                }
                else{
                    st.pop();
                }

            }
            // while(!st.empty() && x > 0 && st.top() < 0){
            //     if(abs(st.top()) < abs(x)){
            //         st.pop();
            //     }
            //     else if(abs(st.top()) == abs(x)){
            //         st.pop();
            //         a=false;
            //         break;
            //     }
            //     else{
            //         a = false;
            //         break;
            //     }

            // }
            if(a) st.push(x);
           
        }
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
            reverse(ans.begin(),ans.end());
        
        return ans;
    }
};