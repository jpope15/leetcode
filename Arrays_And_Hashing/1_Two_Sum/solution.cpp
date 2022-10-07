class Solution {
public:
    // My solution
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int num_to_find = target - nums[i];
            if (mp.find(num_to_find) != mp.end()) {
                return vector<int>{mp[num_to_find], i};
            }
            else {
                mp[nums[i]] = i;
            }        
        }
        return vector<int>{};
    }
};