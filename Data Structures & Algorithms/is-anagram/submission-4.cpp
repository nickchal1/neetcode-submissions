class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> st;
        unordered_map<char, int> tt;

        for(auto l : s) {
            if (st.find(l) == st.end()) {
                st.insert({l, 1});
            }
            else {
                st[l]++;
            }
        }
        for(auto l : t) {
            if (tt.find(l) == tt.end()) {
                tt.insert({l, 1});
            }
            else {
                tt[l]++;
            }
        }
        return (st == tt);
    }
};
