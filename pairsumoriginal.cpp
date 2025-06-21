#include <bits/stdc++.h>

int pairSum(int *arr, int n, int num)
{
    sort(arr, arr + n);
    int si = 0;
    int ei = n - 1;
    int cnt = 0;
    while (si < ei)
    {
        if (arr[si] + arr[ei] < num)
        {

            si++;
        }
        else if (arr[si] + arr[ei] > num)
        {
            ei--;
        }
        else
        {

            int elementstart = arr[si];
            int elementend = arr[ei];
            if (elementstart == elementend)
            {
                int n = si - ei + 1;
                cnt += n * (n - 1) / 2;
                return cnt;
            }
            else
            {
                int tempsi = si + 1;
                int tempei = ei - 1;
                while ((tempsi <= tempei) && arr[tempsi] == arr[si])
                {
                    tempsi += 1;
                }
                while ((tempei >= tempsi) && arr[tempei] == arr[ei])
                {
                    tempei -= 1;
                }

                int x = tempsi - si;
                int y = ei - tempei;
                cnt += x * y;
                si = tempsi;
                ei = tempei;
            }
        }
    }
    return cnt;
}