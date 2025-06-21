#include <bits/stdc++.h>
#include <unordered_map>

int findUnique(int *a, int n)
{

    unordered_map<int> mp;
    int minx = INT_MAX;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
      if(mp[a[i]==1])
      {
        return a[i];
      }
    }
}

#include <bits/stdc++.h>


int findDuplicate(int *a, int n)
{

   int sum=0;
   int sum1=0;
    for (int i = 0; i < n-1; i++) {
    sum+=i;
    }
    for (int i = 0; i < n; i++) {
      sum1+=a[i];
    }
    return sum1-sum;
}