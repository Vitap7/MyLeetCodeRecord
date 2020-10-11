#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
                st.push(s[i]);
            else if (s[i] == ']' || s[i] == '}' || s[i] == ')')
            {
                if (!st.empty())
                {
                    if (st.top() == '[' && s[i] == ']')st.pop();
                    else if (st.top() == '{' && s[i] == '}')st.pop();
                    else if (st.top() == '(' && s[i] == ')')st.pop();
                    else return false;
                }
                else return false;
            }
        }
        if (st.empty())
            return true;
        else return false;
    }
};