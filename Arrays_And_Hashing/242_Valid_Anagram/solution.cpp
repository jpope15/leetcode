class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
      return false;
    }

    std::array<int, 26> mp = {0};
    for (int i = 0; i < s.length(); i++) {
      mp[s[i] - 'a']++;
      mp[t[i] - 'a']--;
    }

    return std::all_of(mp.begin(), mp.end(),
                       [](const auto n) { return n == 0; });
  }
};
