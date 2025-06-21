#include <string>
#include <stack>
int countBracketReversals(string input)
{
    if (input.length() % 2 != 0)
    {
        return -1;
    }
    int cnt = 0;
    stack<char> s;
    for (int i = 0; i < input.length(); i++)
    {
        s.push(input[i]);
    }
    while (!s.empty())
    {
        if (s.top() == '}')
        {
            s.pop();
            if (s.top() == '{')
            {
                s.pop();
            }
            else if (s.top() == '}')
            {
                s.pop();
                cnt += 1;
            }
        }
        else if (s.top() == '{')
        {
            s.pop();
            if (s.top() == '{')
            {
                s.pop();
                cnt += 1;
            }
            else if (s.top() == '}')
            {
                s.pop();
                cnt += 2;
            }
        }
    }
    return cnt;
}