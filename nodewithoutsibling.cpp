void print(BinaryTreeNode<int> *root, bool flag)
{
  if (root == NULL)
  {
    return;
  }
  if (!flag)
  {
    cout << root->data << " ";
  }
  if (root->left != NULL && root->right != NULL)
  {
    flag = true;
    print(root->left, flag);
    print(root->right, flag);
  }
  else if (root->left != NULL && root->right == NULL)
  {
    flag = false;
    print(root->left, flag);
  }
  else if (root->left == NULL && root->right != NULL)
  {
    flag = false;
    print(root->right, flag);
  }
  else
  {
    return;
  }
  return;
}

void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{

  print(root, true);
}