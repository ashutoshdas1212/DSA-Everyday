#include <bits/stdc++.h>

void reverse(int *input,int i,int j)
{
    while(i<j)
    {
        swap(input[i],input[j]);
        i++;
        j--;
    }
}

void rotate(int *input, int d, int n)
{
if(d>=n && n!=0)
{
    d=d%n;
}
else if(n==0)
{
return;
}

reverse(input,0,n-1);
reverse(input,0,n-d-1);
reverse(input,n-d,n-1);


}