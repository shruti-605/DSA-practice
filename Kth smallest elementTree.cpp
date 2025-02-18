int solve(BinaryTreeNode<int> *root,int &i,int k){
    //base case
    if(root==NULL){
        return -1;
    }
    //left
    int left=solve(root->left,i,k);
    if(left!=-1){
        return left;
    }
    //node
    i++;
    if(i==k)
        return root->data;
    
    //right
    return solve(root->right,i,k);
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int i=0;
    int ans=solve(root,i,k);
    return ans;
    
}
