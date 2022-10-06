class Solution {
public:
  /// Simple unordered_set approach
  bool containsDuplicate(vector<int> &nums) {
    std::unordered_set<int> uniques;
    for (auto n : nums) {
      if (uniques.find(n) != uniques.end()) {
        return true;
      } else {
        uniques.insert(n);
      }
    }
    return false;
  }

  /// One liner rvalue unordered_set approach
  bool containsDuplicate(vector<int> &nums) {
    return nums.size() >
           std::unordered_set<int>(nums.begin(), nums.end()).size();
  }

  /// Another one liner using std::any_of
  bool containsDuplicate(vector<int> &nums) {
    return std::any_of(nums.begin(), nums.end(),
                       [s = std::unordered_set<int>()](const int n) mutable {
                         return !s.insert(n).second;
                       });
  }
};
