class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowEnd= matrix.size()-1;
        int colEnd= matrix[0].size()-1;
        int rowBeg=0, colBeg=0;
        if (matrix.empty()) {
            return ans;
        }
        while(rowBeg <= rowEnd && colBeg<= colEnd)
        {
            //right chalo col traverse karte hue
            
            for(int i=colBeg; i<=colEnd; i++) ans.push_back(matrix[rowBeg][i]);
            rowBeg++;
            
            //down chalo row ke sath
            for(int i=rowBeg; i<=rowEnd;i++) ans.push_back(matrix[i][colEnd]);
            colEnd--;
            
            //reverse chalo left col traverse karte hue
            if(rowBeg<=rowEnd)
            {
                for(int i=colEnd; i>=colBeg;i--) ans.push_back(matrix[rowEnd][i]);  
            }
            rowEnd--;
            
            //reverse top chalo row ke sath
            if(colBeg<=colEnd)
            {
                for(int i=rowEnd; i>=rowBeg;i--) ans.push_back(matrix[i][colBeg]);
               
            }  
            colBeg++;
        }
        return ans;
    }
};