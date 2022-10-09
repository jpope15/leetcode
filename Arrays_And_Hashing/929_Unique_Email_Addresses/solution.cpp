class Solution {
public:
    // my solution
    int numUniqueEmails(vector<string>& emails) {
        std::unordered_set<std::string> filtered_emails;
        for (const auto& s : emails) {
            std::string filtered_local_name = handleLocalName(s);
            
            auto pos = s.find('@');
            std::string filtered_email = filtered_local_name + '@' + s.substr(pos+1, s.length()-pos);  
            filtered_emails.insert(std::move(filtered_email));
        }
        return filtered_emails.size();
    }
    
    std::string handleLocalName(std::string_view sv) {
        auto pos = sv.find('@');
        std::string_view local_name = sv.substr(0, pos);
        auto p_pos = local_name.find('+');
        if (p_pos != std::string::npos) {
            local_name = local_name.substr(0, p_pos);
        }
        
        std::string new_str;
        for (auto c : local_name) {
            if (c != '.') {
                new_str += c;
            }
        }
        return new_str;
    }

    // end of my solution

    // nice concise solution
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(string &email : emails) {
            string cleanEmail;
            for(char c : email) {
                if(c == '+' || c == '@') break;
                if(c == '.') continue;
                cleanEmail += c;
            }
            cleanEmail += email.substr(email.find('@'));
            st.insert(cleanEmail);
        }
        return st.size();
    }
};