// https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int start = 0;
        long long int end = n;
        long long int mid, ans;
        
        while (start <= end)
        {
            mid = (start + end) /2;
            
            if (isBadVersion(mid) == false)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        
        return ans;
    }
};