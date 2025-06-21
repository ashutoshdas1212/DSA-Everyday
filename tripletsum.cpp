#include <bits/stdc++.h>
using namespace std;
#include <unordered_map>

int pairSum(int *a, int si,int n, int num)
{
    unordered_map<int,int> mp;
int cnt=0;
	
    for (int i = si; i < n; i++) {
      mp[a[i]]++;
    }

    for (int i = si; i < n; i++) {
        int complement=num-a[i];
        mp[a[i]]--;
       if(mp.find(complement)!=mp.end())
       {
             cnt+=mp[complement];
       }
    }
    return cnt;
}
int tripletSum(int *a, int n, int num)
{
	sort(a,a+n);
    int cnt=0;
    for (int i = 0; i < n; i++) {
      int pairsumfor=num-a[i];
      cnt+=pairSum(a,i+1,n-1,pairsumfor);
    }
    return cnt;
}