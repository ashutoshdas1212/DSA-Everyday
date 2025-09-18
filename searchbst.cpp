bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
if(root==NULL)
{
    return false;
}

bool leftBST=false;
bool rightBST=false;

if(root->data==k)
{
    return true;
}
else if(k<root->data)
{
    leftBST=searchInBST(root->left);
}
 else{
    rightBST=searchInBST(root->right);
 }

 return leftBST || rightBST;
}