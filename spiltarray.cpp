#include <bits/stdc++.h>
using namespace std;
#include <vector>

bool split(vector<int> &g3, int n, int diff)
{
    if (n == 0)
    {
        return diff == 0;
    }

    return split(g3, n - 1, diff + g3[n - 1]) || split(g3, n - 1, diff - g3[n - 1]);
}
bool splitArray(int *a, int size)
{

    vector<int> g1;
    vector<int> g2;
    vector<int> g3;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 5 == 0)
        {
            g1.push_back(a[i]);
            sum1 += a[i];
        }
        else if (a[i] % 3 == 0 && a[i] % 5 != 0)
        {
            g2.push_back(a[i]);
            sum2 += a[i];
        }
        else
        {
            g3.push_back(a[i]);
        }
    }

    int diff = sum1 - sum2;

    return split(g3, g3.size(), diff);
}
