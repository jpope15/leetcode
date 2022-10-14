class Solution {
public:
    // my solution
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> mp;
        for (const auto& n : nums)
            mp[n]++;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for (const auto&[n, f] : mp)
        {
            pq.push(make_pair(f,n));
            if (pq.size() > k)
                pq.pop();
        }
        
        vector<int> res;
        res.reserve(k);
        while (!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};