void inorder(BinaryTreeNode<int>* root,vector<int> &in){
    //base case
    if(root==NULL)
       return;
    //inorder traverse
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> inorderVal;//stored sorted element
    //store inOrder=sorted val
    inorder(root,inorderVal);
    int i=0, j=inorderVal.size()-1;
    while(i<j){
        int sum=inorderVal[i]+inorderVal[j];
        if(sum==target)//
        return true;
        else if(sum>target)//if sum is too large move to right pointter
           j--;
        else//move left pointer
           i++;
    }
    return false;
}
