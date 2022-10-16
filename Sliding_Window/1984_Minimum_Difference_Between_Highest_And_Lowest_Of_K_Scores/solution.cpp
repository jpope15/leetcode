class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        auto min_diff = INT_MAX;
        for (int i = k-1; i < nums.size(); i++) {
            min_diff = min(min_diff, nums[i]-nums[i-k+1]);    
        }
        return min_diff;
    }
};