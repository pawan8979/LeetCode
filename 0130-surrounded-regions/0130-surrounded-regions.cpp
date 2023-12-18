class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& mat)
    {
        vis[row][col]=1;
        int n= mat.size();
        int m= mat[0].size();
        int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
        //check top, left, bottom and right neighbours
        for(int i=0;i<4;i++)
        {
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && mat[nrow][ncol]=='O' 
               && !vis[nrow][ncol])
            {
                dfs(nrow, ncol, vis, mat);
            }
        }
    }
public:
    void solve(vector<vector<char>>& mat) {
        int n= mat.size();
        int m= mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));

        for(int col=0;col<m;col++)
        {
            //first row
            if(!vis[0][col] && mat[0][col]=='O')
            {
                dfs(0, col, vis, mat);
            }
            
            //last row
            if(!vis[n-1][col] && mat[n-1][col]=='O')
            {
                dfs(n-1, col, vis, mat);
            }
        }
        
        for(int row=0;row<n;row++)
        {
            //first col
            if(!vis[row][0] && mat[row][0]=='O')
            {
                dfs(row, 0, vis, mat);
            }
            
            //last col
            if(!vis[row][m-1] && mat[row][m-1]=='O')
            {
                dfs(row, m-1, vis, mat);
            }
        }
        
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<m;col++)
            {
                if(!vis[row][col] && mat[row][col]=='O') mat[row][col]='X';
            }
        }
    }
};