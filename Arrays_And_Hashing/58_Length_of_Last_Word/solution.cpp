class Solution {
public:
    // My initial solution using std::reverse and std::stringstream
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        stringstream ss(s);
        string temp;
        if (ss >> temp) {
            return temp.size();
        }
        return 0;
    }

    // My second solution using iterators
    int lengthOfLastWord(string s) {
        auto s_begin = s.begin();
        auto s_end = s.end()-1;
        
        while (s_begin <= s_end && std::isspace(*s_end)) {
            s_end--;
        }
        
        auto last_char_it_of_last_word = s_end;
        while (s_begin <= s_end && std::isalpha(*s_end)) {
            s_end--;
        }
        
        return std::distance(s_end, last_char_it_of_last_word);
    }

    // Ideal solution
    int lengthOfLastWord(string s) {
        bool ok=0;
        string temp;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ') ok=1;
            if(ok&&s[i]==' ') break;
            else if(s[i]!=' ') temp+=s[i];
        }
        return temp.size();
    }
};