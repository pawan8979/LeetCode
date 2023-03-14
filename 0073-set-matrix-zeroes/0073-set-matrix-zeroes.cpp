class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int x=1, y=1;
        int r= matrix.size();
        int c= matrix[0].size();

        // pehle first row me check kro
        for(int j=0;j<c;j++)
        {
            if(matrix[0][j]==0)
                x=0;
        }
        
        //same column ke liye bhi check krlo
        for(int i=0;i<r;i++)
        {
            if(matrix[i][0]==0)
                y=0;
        }

        //ab andr vale matrix ko check kro
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        //ab inner matrix ke basis pe column 0 put krna start kro
        for(int j=1;j<c;j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i=1;i<r;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }

        //ab row ko bhi krlo
        for(int i=1;i<r;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=1;j<c;j++)
                {
                    matrix[i][j]=0;
                }
            }
        } 

        //ab x and y ka bhi krlo put 0

        if(x==0)
        {
            for(int j=0;j<c;j++)
                matrix[0][j]=0;
        }
        if(y==0)
        {
            for(int i=0;i<r;i++)
                matrix[i][0]=0;
        }

    }
};






