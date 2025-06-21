#include <stack>
int countBracketReversals(string input)
{
    if(input.length()==0)
    {
        return;
    }
    if(input.length()%2!=0)
    {
        return -1;
    }
    stack<char> s;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '{')
        {
            s.push(input[i]);
        }
        else
        {
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(input[i]);
            }
        }
    }
    int cnt = 0;
    while (!s.empty())
    {
        char ch1 = s.top();
        s.pop();
        char ch2 = s.top();
        s.pop();
        if (ch1 == ch2)
        {
            cnt += 1;
        }
        else
        {
            cnt += 2;
        }
    }
    return cnt;
}