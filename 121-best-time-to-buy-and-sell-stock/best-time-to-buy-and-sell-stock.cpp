class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int bestbuy=prices[0];
        for (int val:prices){
            if (val>bestbuy){
                mp=max(mp,val-bestbuy);
            }
            bestbuy=min(bestbuy,val);
        }
        return mp;
        
    }
};