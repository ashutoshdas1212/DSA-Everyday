void subset(vector<int> &arr,vector<vector<int>> &v, int n,int currindex, int subsetsize, int cs[20])
{
    if (currindex == n)
    {
        vector<int> a;
        for (int i = 0; i < subsetsize; i++)
        {
            a.push_back(cs[i]);
        }
        
        v.push_back(a);
        return;
    }

    subset(arr,v, n,  currindex + 1, subsetsize, cs);
    cs[subsetsize] = arr[currindex];
    subset(arr,v, n,  currindex + 1, subsetsize + 1, cs);
    return ;
}

vector<vector<int>> getUniqueSubsets(vector<int> &arr)
{
    vector<vector<int>> v;
    vector<int> a;
    int currindex = 0;
    int subsetsize = 0;
    int cs[20];
    subset(arr,v, arr.size(), currindex, subsetsize, cs);
    return v;
}