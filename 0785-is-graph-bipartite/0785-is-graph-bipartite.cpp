class Solution {
private:
    bool dfs(int start, int color[], vector<vector<int>>& adj)
    {
        for(auto it: adj[start])
        {
            if(color[it]== -1)
            {
                color[it]= !color[start];
                if(dfs(it, color, adj) == false) return false;
            }
            else if(color[it]==color[start]) return false;
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& adj) {
        int V= adj.size();
        int color[V];
	    memset(color, -1, sizeof(color));
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1){
	            if(dfs(i, color, adj)==false) return false;
	        }
	    }
	    return true;
    }
};