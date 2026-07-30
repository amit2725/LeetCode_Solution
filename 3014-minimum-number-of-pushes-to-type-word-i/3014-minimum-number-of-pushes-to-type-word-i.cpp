class Solution {
public:
    int minimumPushes(string word) {
        int sum=0;
        vector<int>key(8,0);
        for(int i=0;i<word.size();i++){
           if(key[i%8]==0) key[i%8]++;
           else{
            key[i%8]=key[i%8]+(i/8)+1;
           }
        }
        for(int x:key){
            sum=sum+x;
        }
        return sum;
    }
};