vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{

    vector< Node<int>*> v;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    Node<int*> rootnode=new Node<int*> (root->data);
    rootnode->next=NULL;

    BinaryTreeNode<int *> blank=new BinaryTreeNode<int>(-1);
    q.push(blank);
    Node<int *>head=NULL;
    Node<int *>tail=NULL;

    while(!q.empty() && q.size()!=1)
    {
        BinaryTreeNode<int> *front=q.front();
        q.pop();

        if(front->data!=-1)
        {
            Node<int* > node=new Node<int>(front->data);
            if(head==NULL)
            {
                head=node;
                tail=node;
                v.push(head);

            }
            else{
                tail->next=node;
                tail=node;
            }
        }

        if(front->data!=-1)
        {
            if(front->left!=NULL)
            {
                q.push(front->left);
            }
            if(front->right!=NULL)
            {
                q.push(front->right);

            }
        }
        else{
            if(!q.empty())
            {
                BinaryTreeNode<int> *blank=new BinaryTreeNode<int>(-1);
                q.push(blank);
                tail->next=NULL;
                head=NULL;
                tail=NULL;
            }
        }


    }

}