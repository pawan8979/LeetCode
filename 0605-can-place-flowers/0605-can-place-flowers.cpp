class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        f.insert(f.begin(),0);
        f.push_back(0);
        int cnt=0;
        for(int i=1;i<f.size()-1;i++)
        {
            if(f[i-1]==0 && f[i]==0 && f[i+1]==0)
            {
                cnt++;
                f[i]=1;
            }
        }
        if(cnt>=n)
        {
            return true;
        }
        return false;
    
    }
};