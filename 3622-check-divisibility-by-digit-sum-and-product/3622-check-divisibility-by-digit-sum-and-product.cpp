class Solution {
public:
    bool checkDivisibility(int n) {
        int real = n;
        int sum=0;
        int prod=1;
        while(n>0){
            int temp=n%10;
            sum+=temp;
            prod*=temp;
            n=n/10;
        }
        if(!(real%(sum+prod))) return true;
        return false;
    }
};