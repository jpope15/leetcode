class Solution {
public:
    // My solution
    int maxArea(vector<int>& height) 
    {
        int max_area = 0;
        int l = 0;
        int r = height.size()-1;
        
        while (l < r)
        {
            int h = std::min(height[l], height[r]);
            max_area = std::max(max_area, h * (r-l));

            while (height[l] <= h && l < r) {
                l++
            }
            
            while (height[r] <= h && l < r) {
                r--
            }
        }
        
        return max_area;
    }
};