class Solution {
public:
  int climbStairs(int n) {
       if(n==1) return 1;
        int p1=1;
        int p2=2;
        for(int i=3;i<=n;i++)
        {
            int dp= p1+p2;
            p1=p2;
            p2=dp;
        }
        return p2;
    }
};