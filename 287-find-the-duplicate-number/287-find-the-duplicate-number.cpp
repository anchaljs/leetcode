class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<=nums.size();i++){
            temp.push_back(0);
        }
        int ans=0;
      for(int i=0;i<nums.size();i++){
          if(temp[nums[i]]==1){
              ans=nums[i];
              return nums[i];
          }
         temp[nums[i]]=1;
          
      }
        return ans;
        
        
    }
};