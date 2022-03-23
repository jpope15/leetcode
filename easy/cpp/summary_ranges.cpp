// https://leetcode.com/problems/summary-ranges/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() == 0) return {};
        vector<string> res;
        string delim = "->";
        int first = nums[0];
        int i;
        for (i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i-1]+1)
            {
                string temp;
                if (first == nums[i-1])
                {
                    temp = to_string(first);
                }
                else
                {
                    temp = to_string(first) + delim + to_string(nums[i-1]);

                }
                first = nums[i];
                res.push_back(temp);
            }
        }
        if (first == nums.back())
        {
            res.push_back(to_string(first));
        }
        else
        {
            res.push_back(to_string(first) + delim + to_string(nums.back()));
        }
        return res;
    }
};