class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& seats) {
        ranges:: sort(seats);
       int ans = 0;
       int i=0;
       int x =seats.size();
       int prev=0;
       while(i<x){
        int row=seats[i][0];
            bool a =1,b=1,c=1;
            ans+=2*(row-prev-1);
            while(i<x && row==seats[i][0]){
                int col =seats[i][1];
                if(2<=col && col<=5) a=0;
                if(4<=col && col<=7) b=0;
                if(6<=col && col<=9) c=0;
                i++;
                prev=row;
            }
            
            if(a && c ) ans+=2;
            else if(a || b|| c) ans+=1;
       }
       ans+=(n-prev)*2;
       return ans;
    }
};