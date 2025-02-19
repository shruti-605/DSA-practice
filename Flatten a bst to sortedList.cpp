void inorder(TreeNode<int>* root,vector<int> &in){
    //base case
    if(root==NULL)
    return;
    
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<int> inorderVal;
    inorder(root,inorderVal);
    //stored inorder value
    int n=inorderVal.size();

    TreeNode<int> *newRoot=new TreeNode<int>(inorderVal[0]);
    TreeNode<int> *curr=newRoot;//newroot=2=null

    //2nd step
    for(int i=1;i<n;i++){
        TreeNode<int> *temp=new TreeNode<int>(inorderVal[i]);

        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    //3rd step ensure lastNode has null left and right pointer
    curr->left=NULL;
    curr->right=NULL;
    return newRoot;
}
