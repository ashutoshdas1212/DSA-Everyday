
#include <bits/stdc++.h>
using namespace std;
int pairSum(int *arr, int n, int num)
{
    int i = 0, j = n - 1;
    int cnt = 0;
    sort(arr,arr+n);
    while (i <= j)
    {
        if ((arr[i] + arr[j]) == num)
        {
            if(arr[i]==0)
            {
                while(arr[i]==0)
                {
                    if(arr[i]!=0)
                    {
                        break;
                    }
                   cnt++; i++;
                }
            
            }
            else if (arr[j]==0)
            {
                 cnt+=n;
            } 
          else if(arr[i]==arr[j])
            {
                int n=j+1;
                cnt+=n*(n-1)/2;
            }
            else {
              cnt++;
              i++;
              j--;
            }
        }
        else if ((arr[i] + arr[j]) < num)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return cnt;
}