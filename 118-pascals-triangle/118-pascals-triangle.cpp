class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int>v;
        vector<int>a;
        vector<vector<int>>ans;
       for(int i=0;i<numRows;i++){
           for(int j=0;j<i+1;j++){
               if(j==0 || j==i){
                   a.push_back(1);
               }
               else{
                  a.push_back(v[j]+v[j-1]); 
               }
           }
               v.clear();
               v=a;
               a.clear();
               ans.push_back(v);
           
       } 
        return ans;
    }
};