class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int maxwater=INT_MIN;
        int right=height.size()-1;
        while(left<=right){
            int curr_water=(right-left)*(min(height[left],height[right]));
            maxwater=max(curr_water,maxwater);
            
            
             if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            
        }
        return maxwater;
        
    }
};