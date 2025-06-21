#include <bits/stdc++.h>
using namespace std;
bool checkRedundantBrackets(string expr)
{
    stack<char> s;
    bool flag = true;
    int i = 0;

    while (expr[i] != '\0')
    {

        if (expr[i] == '(' || expr[i] == '+' || expr[i] == '-' || expr[i] == '/' || expr[i] == '*')
        {
            s.push(expr[i]);
        }

        else if (expr[i] == ')' && !s.empty())
        {
            if (s.top() == '+' || s.top() == '-' || s.top() == '/' || s.top() == '*')
            {
                while (s.top() != '(')
                {
                    s.pop();
                }
                if (!s.empty())
                {
                    s.pop();
                }
            }
            else if (s.top() == '(')
            {

                return true;
            }
        }
        i++;
    }
    return false;
}