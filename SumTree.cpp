class Solution {
  public:
    bool isSumTree(Node* root) {
        // Your code here
        if(!root) return 0;
        
        if(!root->left && !root->right) return root->data;
        
        int leftSum=isSumTree(root->left);
        int rightSum=isSumTree(root->right);
        
        if(leftSum==-1|| rightSum==-1 || root->data!=leftSum+rightSum){
            return -1
        }
        return root->data+leftSum+rightSum;
    }
};
