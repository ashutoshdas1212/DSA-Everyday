bool check(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->left != NULL && root->left->data >= root->data)
    {
        return false;
    }
    if (root->right != NULL && root->right->data <= root->data)
    {
        return false;
    }
    return check(root->left) && check(root->right);
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    bool isBST = check(root);

    if (isBST)
    {
        return 1 + max(largestBSTSubtree(root->left), largestBSTSubtree(root->right));
    }
    
    return  return max(largestBSTSubtree(root->left), largestBSTSubtree(root->right));;
}

// left<root->data , right>root->data

// if(check (root->left) is BST? && check (root->right) is BST?)
//      if yes:return max(height(left,right))+1
// else
//      return 0