class Solution {
public:

    bool isMatching(char s, stack<char>& st){
        if((s==')' && st.top()=='(') || (s==']' && st.top()=='[') || (s=='}' && st.top()=='{'))
            return true;
        else
            return false;
    }

    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                st.push(s[i]);
            else if(st.empty())
                return false;
            else if(isMatching(s[i],st))
                st.pop();
            else
                return false;
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
