#include <bits/stdc++.h>
using namespace std;

int countBracketReversals(string input)
{
    stack<int> s;
    int n = input.length();
    if (n % 2 != 0)
    {
        return -1;
    }

    s.push(input[0]);
    for (int i = 1; i<n; i++)
    {
        if (input[i] == '}')
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
        else
        {
            s.push(input[i]);
        }
    }

    int o = 0, c = 0;
    while (!s.empty())
    {
        if (s.top() != '{')
        {
            o++;
        }
        else
        {
            c++;
        }
        s.pop();
    }
    int cnt = 0;
    if (o == 0 || c==0 )
    {
        cnt += max(o, c) / 2;
    }
 
    else if (o == c)
    {

        if (o % 2 != 0 && c % 2 != 0)
        {
            cnt += (o + c) / 2 + 1;
        }
        else
        {
            cnt += (o + c) / 2;
        }
    }
    else
    {
        cnt += 2 * min(o, c) + ((max(o, c) - min(o, c)) / 2);
    }
    return cnt;
}