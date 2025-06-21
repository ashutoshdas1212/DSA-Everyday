#include <bits/stdc++.h>

int maximumProfit(int budget[], int n) {
    sort(budget,budget+n);
    int sum=0;
    int mx=INT_MIN;
    for (int i = 0; i < n; i++) {
  
     int k=(n-i)*budget[i];
      mx=max(k,mx);
    }
return mx;
}
