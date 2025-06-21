#include <bits/stdc++.h>
using namespace std;
#include <unordered_map>

int pairSum(int *arr, int n, int num)
{
    unordered_map<int,int> mp;
int cnt=0;
	
    for (int i = 0; i < n; i++) {
      mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        int complement=num-mp[arr[i]];
        mp[arr[i]]--;
       if(mp.finds(complement)!=mp.end())
       {
             cnt+=mp[complement];
       }
    }
    return cnt;
}