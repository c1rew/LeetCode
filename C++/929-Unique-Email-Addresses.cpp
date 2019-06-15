class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> emails_set;
        for (const string& email : emails) {
            string out;
            bool at = false;
            bool plus = false;
            for (char c : email) {
                if (c == '.') {
                    if (!at) continue;
                } else if (c == '@') {
                    at = true;          
                } else if (c == '+') {
                    if (!at) {
                        plus = true;
                        continue;
                    }
                }
                if (!at && plus) continue;
                out += c;        
            }      
            emails_set.insert(std::move(out));
        }
        return emails_set.size();
    }
};
