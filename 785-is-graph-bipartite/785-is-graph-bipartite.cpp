class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
       
        vector<int>color(v,-1);
        for(int i=0;i<v;i++){
            if(color[i]==-1){
                
           
        
                queue<int>q;
                q.push(i);
                color[i]=0;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(auto it: graph[node]){
                        if(color[it]==-1){
                            color[it]=1-color[node];
                            q.push(it);
                        }
                        else if(color[node]==color[it]){
                            return false;
                        }
                    }
                }
                 }
        }
            
            
         return true;   
    
        
    }
};