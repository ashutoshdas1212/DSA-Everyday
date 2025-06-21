void treevector(BinaryTreeNode<int> *root, vector<int> v)
{
    if(root==NULL)
    {
        return;
    }
    v.push_back(root->data);
    treevector(root->left, v);
    treevector(root->right, v);
    return;
}

void pairSum(BinaryTreeNode<int> *root, int sum)
{
    vector<int> v;
    treevector(root,v);
    int i=0,j=v.size()-1;

    sort(v.begin(),v.end());
    while(i<=j)
    {
        if((v[i]+v[j])>sum)
        {
            j--;
        }
        else if ((v[i]+v[j])<sum)
        {
            i++;
        }
        else{
            cout<<v[i]<<" "<<v[j]<<endl;
            i++;
            j--;
        }
    }
}

