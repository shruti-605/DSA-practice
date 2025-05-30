void dfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj,vector<int> &component){
    // store
    component.push_back(node);
    //mark visited
    visited[node]=true;
    //hr connected node ke liye recursive call
    for(auto i:adj[node]){
        if(!visited[i]){
            dfs(i,visited,adj,component);
        }
    } 
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int> >ans;
    unordered_map<int,bool>visited;

    //for all nodes call dfs, not visited
    for(int i=0;i<V;i++){
        vector<int>component;
        if(!visited[i]){
            dfs(i,visited,adj,component);
            ans.push_back(component);
        }
    }
    return ans;
}
