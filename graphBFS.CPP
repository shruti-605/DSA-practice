#include<unordered_map>
#include<list>
#include<set>
void prepareAdjList(unordered_map<int,list<int>> &adjList,vector<pair<int,int>> &adj){
    for(int i=0;i<edges.sizes;i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);    
    }
}
void bfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited,vector<int> ans,int node){
    queue<int>q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
    
    //store front Node
    ans.push_back(frontNode);
    //traverse all the neighbours
    for(auto i:adjList[frontNode]){
        if(!visited[i]){
            q.push();
            visited[i]=1;
        }
        }
    }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    unordered_map<int,list<int>>adjList;
    vector<int> ans;
    unordered_map<int,bool> visited;

    prepareAdjList(adjList,edges);

    //traverse all components of graph

    for(int i=0;i<visited;i++){
        if(!visited=[i]){
            bfs(adjList,edges,ans,i);
        }
    }
}
