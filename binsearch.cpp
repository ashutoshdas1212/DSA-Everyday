#include <bits/stdc++.h>
using namespace std;

int binary(int input[], int s, int e, int k)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    if (k < input[mid])
    {
        binary(input, s, mid - 1);
    }
    else if (k > input[mid])
    {
        binary(input, mid + 1, e);
    }
    else
    {
        return mid;
    }
}
int binarySearch(int input[], int size, int element)
{
    int s = 0;
    int e = size - 1;
    binary(input, s, e, element);
}