class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int curr_min=INT_MAX;
        int max_profit=INT_MIN;
        for(int i=0;i<prices.size();i++){
             int minimum=prices[i];
            curr_min=min(minimum,curr_min);
            int profit=prices[i]-curr_min;
            
            max_profit=max(profit,max_profit);
        }
        return max_profit;
    }
};