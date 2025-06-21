#include <map>
void intersection(int *a1, int *a2, int n, int m)
{
    map<int, int> mp1;
    map<int, int> mp2;
    for (int i = 0; i < n; i++)
    {
        mp1[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp2[a2[i]]++;
    }
    for (const auto &pair : mp1)
    {
        int x = min(mp1[pair.first], mp2[pair.first]);
        for (int i = 0; i < x; i++)
        {
            cout << pair.first << " ";
        }
    }
}

void intersection(int *arr1, int *arr2, int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}