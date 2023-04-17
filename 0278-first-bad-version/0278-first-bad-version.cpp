// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int s=1, l=n;
        int fbv= -1;
        if(isBadVersion(s)) return s;
        while(s<=l)
        {
            int mid= s+(l-s)/2;
            if(isBadVersion(mid))
            {   
                fbv= mid;
                l= mid-1;
            }
            else
                s=mid+1;
        }
        return fbv;
    }
};