#include <bits/stdc++.h>
using namespace std;
#include <string>
int perm(string input, string output[])
{
    if (input.empty())
    {
        output[0] = "";
        return 1;
    }

    char x = input[0];
    int row = 0;
    string smalloutput[1000];
  
    int size = perm(input.substr(1), smalloutput);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <=smalloutput[i].size(); j++)
        {
            output[row++] = smalloutput[i].substr(0, j) + x + smalloutput[i].substr(j, size - j);
        }
    }

    return row;
}
int returnPermutations(string input, string output[])
{
    return perm(input, output);
}

