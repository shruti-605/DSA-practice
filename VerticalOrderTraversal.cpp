vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,map<int,vector<int>>> nodes;
        //first HD and second level and values of node
        queue<pair<Node*,pair<int,int>>>q;
        //node displaying current node in the element
        vector<int>ans;
        if(root==NULL)
            return ans;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<Node*,pair<int,int>> temp=q.front();
            //first and second me hd,level extract cureent node,hd,level from queue
            q.pop();//nkal legaii
            Node* frontNode=temp.first;//stores current node
            int hd=temp.second.first;
            int level=temp.second.second;//stores
            nodes[hd][level].push_back(frontNode->data);//stores nodes value
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left,make_pair(hd-1,level+1)));
            if(frontNode->right)
                q.push(make_pair(frontNode->right,make_pair(hd+1,level+1)));
        }
        for(auto i:nodes){
            for(auto j:i.second){
                for(auto k:j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
