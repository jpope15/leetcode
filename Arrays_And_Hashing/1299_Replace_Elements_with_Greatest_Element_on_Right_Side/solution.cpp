class Solution {
public:
  // My solution
  vector<int> replaceElements(vector<int> &arr) {
    for (auto begin = arr.begin(); begin != arr.end() - 1; begin++) {
      *begin = *std::max_element(begin + 1, arr.end());
    }
    arr.back() = -1;
    return arr;
  }

  // Optimal solution
  vector<int> replaceElements(vector<int> &arr) {
    int n = arr.size(), temp, mx = -1;
    for (int i = n - 1; i >= 0; i--) {
      temp = arr[i];
      arr[i] = mx;
      mx = max(mx, temp);
    }
    return arr;
  }
};
