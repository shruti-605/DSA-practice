class Solution {
    private:
       int height(struct Node* node){
           //base case
           if(node==NULL){
               return 0;
           }
           int left=height(node->left);
           int right=height(node->right);
           
           int ans=max(left,right)+1;
           return ans;
       }
  public:
    int diameter(Node* root) {
        // Your code here
        if(root=NULL){
            return 0;
        }
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+height(root->right)+1;
        
        int ans=max(op1,max(op2,op3))
        return ans;
    }
};
