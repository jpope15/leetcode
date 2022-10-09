class Solution {
public:
    // my solution, modifies in place with O(n) time and O(1) space
    int removeElement(vector<int>& nums, int val) {
        std::array<int, 51> lookup = {0};
        
        for (auto n : nums) {
            lookup[n] = (n == val)? 0 : lookup[n]+1;
        }
        
        auto nums_it = nums.begin();
        for (auto i = size_t(0); i < lookup.size(); i++) {
            while (lookup[i]-- > 0) {
                *nums_it = i;
                nums_it++;
            }
        }
        return std::distance(nums.begin(), nums_it);
    }
};