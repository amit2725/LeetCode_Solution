class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int temp=0;
        int sum=0;
        for(int x: requests){
            if(x!=temp){
                sum=sum+(abs(temp-x));
                temp=x;
            }
        }
        return sum;
    }
};