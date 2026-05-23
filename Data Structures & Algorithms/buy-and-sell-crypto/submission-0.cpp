class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start = 0, maxProfit = 0;
        if(prices.size() < 2) return maxProfit;
        for(int i=1; i < prices.size(); i++){
            if(prices[start] < prices[i]){
                maxProfit = max(maxProfit, prices[i] - prices[start]);
            }else{
                start=i;
            }
        }
        return maxProfit;
    }
};