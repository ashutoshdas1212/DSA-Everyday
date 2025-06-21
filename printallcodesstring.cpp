#include <bits/stdc++.h>


int print(string input, vector<string>& v)
{
    if (input.empty())
    {
        v.push_back("");
        return 1;
    }
    int n1 = input[0] - '0';
    

    int row = 0;
    if (n1 >= 1 && n1 <= 9)
    {
        char a = char('a' + n1 - 1);
        vector<string> so1;
        int size1 = print(input.substr(1), so1);
        for (int i = 0; i < size1; i++)
        {
            v.push_back(a + so1[i]);
            row++;
        }
    }

    if (input.size() > 1)
    {
       int n2 = ((input[0] - '0') * 10 + (input[1] - '0'));
        if (n2 >= 10 && n2 <= 26)
        {
            char b = char('a' + n2 - 1);
            vector<string> so2;
            int size2 = print(input.substr(2), so2);
            for (int i = 0; i < size2; i++)
            {
                v.push_back(b + so2[i]);
                row++;
            }
        }
    }

    return row;
}

void printAllPossibleCodes(string input)
{
    vector<string> v;
    print(input, v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    //     for (const auto& s : v) {
    //     cout << s << endl;
    // }
}