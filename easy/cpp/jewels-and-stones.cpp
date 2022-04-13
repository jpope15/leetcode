// https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> lookup;
        for (const auto& jewel : jewels)
        {
            lookup.insert(jewel);
        }
        int count = 0;
        for (const auto& stone : stones)
        {
            if (lookup.find(stone) != lookup.end())
            {
                count++;
            }
        }
        return count;
    }
};