class BalancedClass
{
    public:
    int height;
    bool balanced;
};

BalancedClass *balancedtree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        BalancedClass *ans=new BalancedClass();
        ans->height = 0;
        ans->balanced = true;
        return ans;
    }

    BalancedClass *ans1 = balancedtree(root->left);
    BalancedClass *ans2 = balancedtree(root->right);

    bool flag = false;

    if (!(ans1->balanced) || !(ans2->balanced) || abs(ans1->height - ans2->height) > 1)
    {
        flag = false;
    }
    else
    {
        flag = true;
    }

    BalancedClass *output = new BalancedClass();
    output->height = max(ans1->height, ans2->height) + 1;
    output->balanced = flag;

    return output;
}
bool isBalanced(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return true;
    }

    return balancedtree(root)->balanced;
}