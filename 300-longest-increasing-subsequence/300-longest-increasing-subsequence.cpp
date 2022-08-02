class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[0]=1;
        for(int i=0;i<nums.size();i++){
            int max=0;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(dp[j]>max){
                        max=dp[j];
                    }
                }
              
                
              }
            dp[i]=max+1;
            
        }
        int ans=0;
        
        for(int i=0;i<n;i++){
             ans=max(ans,dp[i]);
        }
        return ans;
        
    }
};