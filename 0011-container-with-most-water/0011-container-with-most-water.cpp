class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        long long maxi = INT_MIN;
        while(i < j) {
            if(height[i] < height[j]) {
                maxi = max<long long>(maxi, (j-i) * height[i]);
                i++;
            }
            else {
                maxi = max<long long>(maxi, (j-i) * height[j]);
                j--;
            }
        }
        return maxi;
    }
};
