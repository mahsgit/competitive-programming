class Solution {
public:
    int maxCoins(vector<int>& piles) {
       
        sort(piles.begin(),piles.end());
        int res=0,current=0;
        int i=piles.size()-2,n=piles.size()/3;
        while(current<n && i>=0){
            current++;
            res+=piles[i];
            i-=2;

        }
        return res;
    }
};
