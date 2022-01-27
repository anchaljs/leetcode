class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
      vector<int>ans(prices.size());
        stack<int>st;
        for(int i=prices.size()-1;i>=0;i--){
            int ele=prices[i];
            while(!st.empty() and st.top()>ele){
                st.pop();
            }
            if(st.empty()){
                ans[i]=ele;
            }
            else{
                ans[i]=prices[i]-st.top();
                
            }
            st.push(ele);
        }
        
        return ans;
        
        
            
       
    }
    
};