#include <bits/stdc++.h>
using namespace std;

void subset(int input[],int n,int k,int subsetsize,int idx,int cs[],vector<vector<int>>& v)
{
if(idx==n)
{
    if(k!=0)
    {
        return;
    }
    vector<int> a;
    for (int i = 0; i < subsetsize; i++)
    {
        a.push_back(cs[i]);
    }
    v.push_back(a);
    return;
}
subset(input,n,k,subsetsize,idx+1,cs,v);
cs[subsetsize]=input[idx];

subset(input,n,k-input[idx],subsetsize,idx+1,cs,v);

}

void printSubsetSumToK(int input[], int n, int k) {
    
    vector<vector<int>> v;
    int idx=0;
    int cs[100]={0};

subset(input,n,k,0,idx,cs,v);

    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

}
