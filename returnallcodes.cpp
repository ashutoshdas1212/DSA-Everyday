#include <bits/stdc++.h>
using namespace std;

int getCodes(string input, string output[10000])
{

    if (input[0] == '\0')
    {
        output[0][0] = "";
        return 1;
    }
    int row = 0;

    int smalloutput1[10000];
    int size1 = getCodes(input.substr(1), smalloutput1);

    int n = stoi(input[0]);
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

    if (input[1] != '\0')
    {
        int smalloutput2[10000];
        int size2 = getCodes(input.substr(2), smalloutput2);

        int n = stoi(input[0]) * 10 + stoi(input[1]);
        char b;
        if (n >= 10 && n <= 26)
        {
            b = char('a' + n - 1);
        }

        for (int i = 0; i < size2; i++)
        {
            output[row] = b + smalloutput2[i];
        }
        row++;
    }

    return row;
}
