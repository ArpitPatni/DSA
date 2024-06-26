class Solution {
public:
    bool check(int start,vector<int>adj[],int color[]){
        queue<int>q;
        q.push(start);
        color[start]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }else{
                    if(color[it]==color[node]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> adj[V]; 
        int color[V];
	    for(int i=0;i<V;i++){
	        color[i]=-1;
            for(int j=0;j<graph[i].size();j++){
                adj[i].push_back(graph[i][j]); 
            }
	    }
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(check(i,adj,color)==false){
	                return false;
	            }
	        }
	    }
	    return true;
    }
};