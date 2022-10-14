class Solution {
public:
    // prefix product and suffic product
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector pre(nums.size(), 1);
        vector suf(nums.size(), 1);
        vector res(nums.size(), 0);
        
        for (int i = 1; i < pre.size(); i++)
        {
            pre[i] = pre[i-1] * nums[i-1];
        }
        
        for (int i = suf.size()-2; i >= 0; i--)
        {
            suf[i] = suf[i+1] * nums[i+1];
        }
        
        for (int i = 0; i < res.size(); i++)
        {
            res[i] = pre[i] * suf[i];
        }
        
        return res;
    }
};