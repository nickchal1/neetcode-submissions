class Solution {
public:
    bool isPalindrome(string s) {

        string ns;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                ns += toupper(s[i]);
            }
        }

        for (int i = 0; i < ns.size() / 2; ++i) {
            int r = ns.size() -i -1;
            if (ns[i] != ns[r]) {
                return false;
            }
        }
        return true;
    }
};
