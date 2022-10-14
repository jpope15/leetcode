class Solution {
public:
    // my solution
    int longestConsecutive(vector<int>& nums) 
    {
        std::unordered_set<int> lookup(nums.begin(), nums.end());
        
        auto longest = 0;
        for (auto n : nums) {
            if (lookup.find(n-1) == lookup.end()) {
                auto curr = 1;
                while (lookup.find(++n) != lookup.end()) {
                    curr++;
                } 
                longest = std::max(longest, curr);   
            }
        }
        return longest;
    }
};