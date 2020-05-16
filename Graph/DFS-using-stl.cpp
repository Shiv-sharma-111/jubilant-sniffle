#include<bits/stdc++.h>
using namespace std;
void DFSUtil(vector<int> vec[],int s,bool *visited);
void addEdge(vector<int> vec[],int u,int v)
{
  vec[u].push_back(v);
  vec[v].push_back(u);
}

void DFSUtil(vector<int> vec[],int s,bool *visited)
{
  visited[s]=true;
  cout<<s<<" ";
  for(auto i : vec[s])
  {
    if(!visited[i])
    {
      DFSUtil(vec,i,visited);
    }
  }
}
void DFS(vector<int> vec[],int V,int s)
{
  bool *visited = new bool[V];
  for(int i=0;i<V;i++)
  {
    visited[i]=false;
  }
  DFSUtil(vec,s,visited);
}
int main()
{
  int V=5;
  vector<int>vec[V];
  addEdge(vec, 0, 1);
  addEdge(vec, 0, 4);
  addEdge(vec, 1, 2);
  addEdge(vec, 1, 3);
  addEdge(vec, 1, 4);
  addEdge(vec, 2, 3);
  addEdge(vec, 3, 4);
  //display(vec,V);
  DFS(vec,V,2);
  return 0;
}
