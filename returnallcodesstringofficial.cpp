#include <bits/stdc++.h>
using namespace std;

int getCodes(string input, string output[10000])
{

    if (input.empty())
    {
        output[0] = "";
        return 1;
    }
    int row = 0;

    string smalloutput1[10000];
    int size1 = getCodes(input.substr(1), smalloutput1);

    int n = input[0]-'0';
    char a;
    if (n >= 1 && n <= 9)
    {
        a = char('a' + n - 1);
    }

    for (int i = 0; i < size1; i++)
    {
        output[row] = a + smalloutput1[i];
        row++;
    }

    if (input.size() > 1)
    {
        string smalloutput2[10000];
        int size2 = getCodes(input.substr(2), smalloutput2);

        n = (input[0]-'0') * 10 + (input[1]-'0');
        char b;
        if (n >= 10 && n <= 26)
        {
            b = char('a' + n - 1);

            for (int i = 0; i < size2; i++)
            {
                output[row] = b + smalloutput2[i];
                row++;
            }
            
        }
    }

    return row;
}
