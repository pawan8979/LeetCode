class Solution {
public:
    vector<int> countBits(int n) {
        
        int i=0;
        vector<int> v;
        while(i<=n)
        {
            int count=0;
            int num=i;
             while (num!=0) 
            { 
              num &= (num-1) ; 
              count++; 
            } 
            v.push_back(count);
            i++;
        }
        return v;
    }
};