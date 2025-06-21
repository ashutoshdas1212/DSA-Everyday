#include <stack>
bool check(string str,stack<int> s)
{
   
}
bool checkRedundantBrackets(string str)
{
    stack<char> s;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            s.push(str[i]);
        }
        if (str[i] == ')')
        {
            s.push(str[i]);
        }
        if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
        {
            s.push(str[i]);
        }
    }

    while (!s.empty())
    {
        if (s.top() == ')')
        {
            s.pop();
            if (s.top() == '(')
            {
                return true;
            }
            else if(s.top()==')')
            {
            check(str,s);
            }
            else if (s.top() == '+' || s.top() == '-' || s.top() == '/' || s.top() == '*')
            {
                while (s.top() != '(')
                {
                    s.pop();
                }
                s.pop();
            }
        }
        if (s.empty())
        {
            return false;
        }
    }
}