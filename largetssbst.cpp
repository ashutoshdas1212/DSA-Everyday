class treenode
{
public:
   
    int height;
    int min;
    int max;
    bool isBST;
};

treenode largest(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        treenode p;
        p.height = 0;
        p.min = INT_MAX;
        p.max = INT_MIN;
        p.isBST = true;
        return p;
    }
    treenode leftBST = largest(root->left);
    treenode rightBST = largest(root->right);

    if (leftBST.isBST && rightBST.isBST && leftBST.max < root->data && rightBST.min > root->data)
    {
        treenode p;

        p.height = 1 + max(leftBST.height, rightBST.height);
        p.min = (root->data, leftBST.min);
        p.max = (root->data, rightBST.max);
        p.isBST = true;
        return p;
    }
    treenode p1;

    p1.height = max(leftBST.height, rightBST.height);
    p1.min = INT_MAX;
    p1.max = INT_MIN;
    p1.isBST = false;
    return p1;
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{

    return largest(root).height;
}
