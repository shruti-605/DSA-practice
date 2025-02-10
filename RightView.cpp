class Solution
{
    public:
    void solve(Node* root,vector<int>&ans,int level){
        //base case
        if(root==NULL)
            return;
        if(level==ans.size())
           ans.push_back(root->data);
        
        solve(root->right,ans,0);
        solve(root->left,ans,0);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       solve(root, ans, 0);
       return ans;
    }
}
;
