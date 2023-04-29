//Brute force
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int area = 0;
//          for(int i = 0; i < n; i++)
//          {
//              for(int j = i+1; j < n; j++)
//              {
//                  area = max(area , min(height[i] , height[j])* (j-i)) ;
//              }
//         }
//         return area;
//     }
// };


//Optimized
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lh=0;
        int rh=height.size()-1;
        int maxi= INT_MIN;
        while(lh<rh)
        {
            int minHeight= min(height[lh], height[rh]);
            maxi= max(maxi, minHeight*(rh-lh));
            if(height[lh]< height[rh]) lh++;
            else rh--;
        }
        return maxi;
    }
};

