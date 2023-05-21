class Solution {
public:
    void flood(vector<vector<int>>& image, int sr, int sc, int m, int n, int color, int oldColor)
    {
        if(sr<0 || sc<0 || sr==m || sc==n || image[sr][sc] != oldColor) return;
        image[sr][sc] = color;
        flood(image,sr+1,sc,m,n,color,oldColor);
        flood(image,sr-1,sc,m,n,color,oldColor);
        flood(image,sr,sc+1,m,n,color,oldColor);
        flood(image,sr,sc-1,m,n,color,oldColor);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m= image.size();
        int n= image[0].size();
        int oldColor= image[sr][sc];
        if(color==oldColor) return image;
        flood(image,sr,sc,m,n,color,oldColor);
        return image;
    }
};