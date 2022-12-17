class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min = prices[0];
        int max_profit = INT_MIN;
        for (int i = 0; i < prices.size(); i++)
        {
            min = std::min(min, prices[i]);
            max_profit = std::max(max_profit, prices[i]-min);
        }
        return max_profit;
    }
};