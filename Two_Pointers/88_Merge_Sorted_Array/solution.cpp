// My solution
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        res.reserve(m + n);
        
        auto l1 = 0;
        auto l2 = 0;
        
        while (l1 < m && l2 < n) {
            if (l1 < m && nums1[l1] <= nums2[l2]) {
                res.push_back(nums1[l1]);
                l1++;
            } else { 
                res.push_back(nums2[l2]); 
                l2++;
            }
        }
        
        while (l1 < m) {
            res.push_back(nums1[l1++]);
        }
        
        while (l2 < n) {
            res.push_back(nums2[l2++]);
        }
        
        nums1 = std::move(res);
    }
};