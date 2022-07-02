class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0;
        int ans=0;
        int j=height.size()-1;
        while(i<j){
      int  width=j-i;
          int  area=width*min(height[i],height[j]);
            ans=max(ans,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
        
    }
};