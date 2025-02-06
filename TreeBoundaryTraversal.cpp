class Solution {
  public:
    void traverseLeft(Node* root,vector<int> &ans){
        if((root==NULL) || (root->left==NULL && root->right==NULL))
            return;
        ans.push_back(root->data);
        if(root->left) traverse(root->left,ans);
        else(root->right) traverse(root->right,ans);
        
    }
    void traverseLeft(Node* root,vector<int> &ans){
        if(root==NULL) return;
        if(root->left==NULL || root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        traverse(root->left,ans);
        traverse(root->right,ans);
    }
    void traverseRight(Node* root,vector<int> &ans){
        if((root==NULL || root->left==NULL && root->right==NULL)){
            return;
        }
        if(root->right){
            traverseRight(root->right,ans);
        }else{
            traverseRight(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(root==NULL) return ans;
        ans.push_back(root->data);
        //left part traverse store
        traverse left(root->left,ans);
        
        //traverse leaf node
        //left subtree
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
        
        //tavarse right data
        traverseRight(root->right,ans);
        return ans;
    }
    
};
