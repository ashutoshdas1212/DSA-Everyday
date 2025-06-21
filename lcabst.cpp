Node *get(BinaryTreeNode<int> *root, int val1, int val2)
{
    if (root == NULL)
    {
        return NULL;
    }
  if(root->data==val1 || root->data==val2)
  {
    return root;
  }
    get(root->left,val1,val2);
    Node *right=get(root->right,val1,val2);

    if(left!=NULL &&& right!=NULL)
    {
         return root;
    }


    if (val1 < root->data && val2 < root->data)
    {
        get(root->left,val1,val2);
        get(root->left,val1,val2);

    }
  else  if (val1 > root->data && val2 > root->data)
    {
        get(root->right,val1,val2);
        get(root->right,val1,val2);

    }
    else{
        get(root->left,val1,val2);
        get(root->right,val1,val2);
    }
}

int getLCA(BinaryTreeNode<int> *root, int val1, int val2)
{
}