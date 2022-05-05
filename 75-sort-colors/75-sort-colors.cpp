class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int ones=0;
        int twos=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
               zero+=1;
           } 
            else if(nums[i]==1){
                ones+=1;
            }
            else{
                twos+=1;
            }
        }
        int i=0;
        
        while(i<nums.size() && zero>0){
            nums[i]=0;
            i++;
            zero--;
        }
        while(i<nums.size() && ones>0){
            nums[i]=1;
            i++;
            ones--;
        }
        while(i<nums.size()){
            nums[i]=2;
            i++;
        }
        
    }
};