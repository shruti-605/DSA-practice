class Solution {
    private:
    int height(struct node* node){
        if(node==NULL){
            return;
        }
        int left=height(node->left);
        int right=height(node->right);
        
        int ans=max(left,right)+1;
        return ans;
        
    }
  public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node* root) {
        // base case
        if(root==NULL){
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        
        bool third=abs(height(root->left)-height(root->right))<=1;
        if(left&&right&&diff){
            return 1;
        }else{
            return false;
        }
    }
};
