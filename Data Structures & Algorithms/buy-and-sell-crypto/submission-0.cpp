class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        for(int i=0; i<n; i++){
            for(int j =i+1; j<n; j++){
                if(prices[j]-prices[i]>=maxprofit){
                    maxprofit = max(maxprofit,(prices[j]-prices[i]));
                }
            }
        }
        return maxprofit;
        
    }
};
