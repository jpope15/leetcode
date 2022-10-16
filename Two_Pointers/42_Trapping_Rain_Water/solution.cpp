class Solution {
public:
    int trap(vector<int>& height) 
    {
        int l = 0, r = height.size()-1, min_height = 0, max_water = 0;
        while (l < r)
        {
            while (l < r && height[l] <= min_height) {
                max_water += min_height - height[l];
                l++;
            }
            while (l < r && height[r] <= min_height) {
                max_water += min_height - height[r];
                r--;
            }
            min_height = min(height[l], height[r]);
        }
        return max_water;
    }
};