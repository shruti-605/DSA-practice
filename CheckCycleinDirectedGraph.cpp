#include<unordered_map>
#include<list>
bool checkCycleDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsVisited,unordered_map<int,list<int>> &adj){
  visited[node]=true;
  dfsVisited[node]=true;

  //saare nodes dekhegaii
  for(auto neighbour: adj[node]){
    if(!visited[neighbour]){
      bool cycleDetected=checkCycleDFS(neighbour,visited,dfsVisited,adj);
      if(cycleDetected)
        return true;
    }
    else if(dfsVisited[neighbour]){
      //visited
      return true;
    }

  }
  dfsVisited[node]=false;
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  unordered_map<int,list<int>> adj;
  for(int i=0;i<edges.size();i++){
    int u=edges[i].first;
    int v=edges[i].second;

    adj[u].push_back(v);
  }
  //call dfs for all component
  unordered_map<int ,bool> visited;
  unordered_map<int,bool> dfsVisited;
  for(int i=1;i<=n;i++){
    if(!visited[i]){
      bool cycleFound=checkCycleDFS(i,visited,dfsVisited,adj);
      if(cycleFound)
        return true;
    }
  }
  return false;  
}
