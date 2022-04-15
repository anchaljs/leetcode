class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit=0;
        int minimal=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minimal){
                minimal=prices[i];
            }
            int ans=prices[i]-minimal;
            profit=max(ans,profit);
            
        }
        return profit;
        
    }
};