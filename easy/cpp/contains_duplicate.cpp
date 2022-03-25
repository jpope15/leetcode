// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (const auto& n : nums)
        {
            if (set.find(n) != set.end())
                return true;
            else
                set.insert(n);

        }
        return false;
    }
};