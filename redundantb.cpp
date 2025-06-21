bool checkRedundantBrackets(string expression)
{
    char ch;
    stack<int> st;
    for (ch : expression)
    {

        if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '(')
        {
            st.push(ch);
        }

        bool hasoperator = false;
        if (ch == ')')
        {
            while (!st.empty() && st.top() == '(')
            {
                st.pop();
                if (ch == '+' || ch == '-' || ch == '/' || ch == '*')
                {
                    hasoperator = true;
                }
            }
            st.pop();
            if (!hasoperator)
            {
                return true;
            }
        }
    }
    return false;
}