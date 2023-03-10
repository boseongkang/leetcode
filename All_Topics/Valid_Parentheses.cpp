class Solution {
public:
    bool isValid(string s) {
        
        int len = s.size() - 1;
        stack<char> st;

        for(int i = 0; i <= len; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty())
                    return false;
                else if(s[i] == ')' && st.top() != '(')
                    return false;
                else if(s[i] == '}' && st.top() != '{')
                    return false;
                else if(s[i] == ']' && st.top() != '[')
                    return false;
                else
                    st.pop();                
            }
        }
        return st.empty();
    }
};
