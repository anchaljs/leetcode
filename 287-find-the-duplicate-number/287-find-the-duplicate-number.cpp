class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int sum=0;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
            sum=nums[i];
            break;
            }
        }
        return sum;
        
    }
};