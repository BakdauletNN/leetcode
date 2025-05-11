class Solution {
public:
    string finalString(string s) {
        std::string res;
        bool reverse_mode = false;
        
        for (char c : s) {
            if (c == 'i') {
                reverse_mode = !reverse_mode;
            } else {
                if (reverse_mode) {
                    res.insert(res.begin(), c);  
                } else {
                    res.push_back(c);          
                }
            }
        }
        
        if (reverse_mode) {
            std::reverse(res.begin(), res.end());
        }
        
        return res;
        
    }
};
