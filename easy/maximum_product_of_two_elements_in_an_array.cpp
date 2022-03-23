// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        /** sol 3
        priority_queue<int, vector<int>, less<int>> pq;
        
        for (const auto& n : nums)
        {
            pq.push(n);
        }
        int num1 = pq.top();
        pq.pop();
        
        int num2 = pq.top();
        pq.pop();
        
        return (num1-1) * (num2-1);
        */
        
        
        sort(nums.begin(), nums.end());
        return (nums[nums.size()-1]-1) * (nums[nums.size()-2]-1);
        
        
        /** sol 1
        int max = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (max < ((nums[i]-1)*(nums[j]-1)))
                {
                    max = (nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return max;
        */
    }
};