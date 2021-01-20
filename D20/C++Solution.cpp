class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(auto x: s)
        {
            if(x == '}')
            {
                if(st.size() && st.top() == '{')
                    st.pop();
                else
                    return false;
            }
            else if(x == ']')
            {
                if(st.size() && st.top() == '[')
                    st.pop();
                else
                    return false;
            }
            else if(x == ')')
            {
                if(st.size() && st.top() == '(')
                    st.pop();
                else
                    return false;
            }
            else
                st.push(x);
        }
        if(st.size() == 0)
            return true;
        return false;
    }
};
